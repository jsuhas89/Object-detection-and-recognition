class bow : public Classifier
{
public:
  bow(const vector<string> &_class_list) : Classifier(_class_list) {}
  
  // Nearest neighbor training. All this does is read in all the images, resize
  // them to a common size, convert to greyscale, and dump them as vectors to a file
  virtual void train(const Dataset &filenames) 
  {
    long ref[65000];
		Mat samples(65000,128,CV_32F);
		//double temp[65000][128];
		int s,k,m,l,c,a,b,cc=0;
		int buf[1250][1000];
		vector<SiftDescriptor> input_descriptor1;
	    vector< vector<SiftDescriptor> > input_descriptor;
		//CImg<double> input_gray;
	for(Dataset::const_iterator c_iter=filenames.begin(); c_iter != filenames.end(); ++c_iter)
      {
	cout << "Processing " << c_iter->first << endl;
	//CImg<double> class_vectors(size*size*3, filenames.size(), 1);
	
	// convert each image to be a row of this "model" image
	for(int i=0; i<c_iter->second.size(); i++)
	{
	 CImg<double> input_gray = resize_image(c_iter->second[i]);
	 input_descriptor1 = Sift::compute_sift(input_gray);
	 //cout << "Size of SIFT descriptor for image" << i << input_descriptor1.size() <<endl;
	 input_descriptor.push_back(input_descriptor1);
	 //cout << "Descriptor of image" << c_iter->second[i] << "saved" << endl;
	}
	//cout << "Size of the vector" << input_descriptor.size() << endl;
    }
	for(k=0;k<input_descriptor.size();k++){
		for(m=0;m<input_descriptor[k].size();m++,s++){
		for(l=0;l<128;l++){
			//temp[s][l] = input_descriptor[k][m].descriptor[l];
			samples.at<float>(s, l) = input_descriptor[k][m].descriptor[l];
		}
		ref[s] = k;
	}
	}
	
	cout<< "total number of images in training set is " << k <<endl;
	cout<< "total number of descriptors is " << s <<endl;
	cout<< "Processing k-means clustering...." << endl;
	
	int clusterCount = 1000;
	int dimensions = 5;
	int sampleCount = 50;
	int attempts = 5;
	
	Mat labels;
	Mat centers; //(clusterCount, 1, samples.type());
	
	cv::kmeans(samples, clusterCount, labels, cv::TermCriteria(CV_TERMCRIT_ITER | CV_TERMCRIT_EPS, 10, 1),attempts, cv::KMEANS_PP_CENTERS, centers);
	
	cout <<"k-means clustering complete" << endl;
	
	for(a=0;a<k;a++){
		for(b=0;b<clusterCount;b++){
			for(cc=0;cc<s;cc++){
				if(ref[cc]==a && labels.at<int>(cc,1)==b){
					c++;
				}
			}
			buf[a][b] = c;
			c=0;
		}
	}
	
	cout<< "Writing data to the output file 'bow.dat'" << endl; 
	ofstream samplefile;
	samplefile.open("SVM/bow.dat", std::ofstream::out | std::ofstream::app);
	for(int t=0; t<k; t++)
    {
	samplefile << t+1 << " ";

           //sample = extract_features(c_iter->second[i].c_str());
           //for(int x=0;x<sample.width();x++){
                for(int y=0;y<clusterCount;y++){
                    if(buf[t][y] != 0)
                        samplefile << y+1 << ":" << buf[t][y] << " ";
                }
           samplefile << "\n";
      }
	  
	  cout<< "Writing complete. Call SVM classifier" << endl;
  }
  
  virtual void testSVM(const Dataset &filenames)
  {
	  long ref[65000];
		Mat samples(65000,128,CV_32F);
		//double temp[65000][128];
		int s,k,m,l,c,a,b,cc=0;
		int buf[1250][1000];
		vector<SiftDescriptor> input_descriptor1;
	    vector< vector<SiftDescriptor> > input_descriptor;
		//CImg<double> input_gray;
	for(Dataset::const_iterator c_iter=filenames.begin(); c_iter != filenames.end(); ++c_iter)
      {
	cout << "Processing " << c_iter->first << endl;
	//CImg<double> class_vectors(size*size*3, filenames.size(), 1);
	
	// convert each image to be a row of this "model" image
	for(int i=0; i<c_iter->second.size(); i++)
	{
	 CImg<double> input_gray = resize_image(c_iter->second[i]);
	 input_descriptor1 = Sift::compute_sift(input_gray);
	 //cout << "Size of SIFT descriptor for image" << i << input_descriptor1.size() <<endl;
	 input_descriptor.push_back(input_descriptor1);
	 //cout << "Descriptor of image" << c_iter->second[i] << "saved" << endl;
	}
	//cout << "Size of the vector" << input_descriptor.size() << endl;
    }
	for(k=0;k<input_descriptor.size();k++){
		for(m=0;m<input_descriptor[k].size();m++,s++){
		for(l=0;l<128;l++){
			//temp[s][l] = input_descriptor[k][m].descriptor[l];
			samples.at<float>(s, l) = input_descriptor[k][m].descriptor[l];
		}
		ref[s] = k;
	}
	}
	
	cout<< "total number of images in training set is " << k <<endl;
	cout<< "total number of descriptors is " << s <<endl;
	cout<< "Processing k-means clustering...." << endl;
	
	int clusterCount = 1000;
	int dimensions = 5;
	int sampleCount = 50;
	int attempts = 5;
	
	Mat labels;
	Mat centers; //(clusterCount, 1, samples.type());
	
	cv::kmeans(samples, clusterCount, labels, cv::TermCriteria(CV_TERMCRIT_ITER | CV_TERMCRIT_EPS, 10, 1),attempts, cv::KMEANS_PP_CENTERS, centers);
	
	cout <<"k-means clustering complete" << endl;
	
	for(a=0;a<k;a++){
		for(b=0;b<clusterCount;b++){
			for(cc=0;cc<s;cc++){
				if(ref[cc]==a && labels.at<int>(cc,1)==b){
					c++;
				}
			}
			buf[a][b] = c;
			c=0;
		}
	}
	
	cout<< "Writing data to the output file 'bowtest.dat'" << endl; 
	ofstream samplefile;
	samplefile.open("SVM/bowtest.dat", std::ofstream::out | std::ofstream::app);
	for(int t=0; t<k; t++)
    {
	samplefile << t+1 << " ";

           //sample = extract_features(c_iter->second[i].c_str());
           //for(int x=0;x<sample.width();x++){
                for(int y=0;y<clusterCount;y++){
                    if(buf[t][y] != 0)
                        samplefile << y+1 << ":" << buf[t][y] << " ";
                }
           samplefile << "\n";
      }
	  
	  cout<< "Writing complete. Call SVM classifier" << endl;
  }
  
  
  
  virtual string classify(const string &filename)
  {
    CImg<double> test_image = extract_features(filename);
	      
    // figure nearest neighbor
    pair<string, double> best("", 10e100);
    double this_cost;
    for(int c=0; c<class_list.size(); c++)
      for(int row=0; row<models[ class_list[c] ].height(); row++)
	if((this_cost = (test_image - models[ class_list[c] ].get_row(row)).magnitude()) < best.second)
	  best = make_pair(class_list[c], this_cost);

    return best.first;
  }

  virtual void load_model()
  {
    for(int c=0; c < class_list.size(); c++)
      models[class_list[c] ] = (CImg<double>(("nn_model." + class_list[c] + ".png").c_str()));
  }
protected:
  // extract features from an image, which in this case just involves resampling and 
  // rearranging into a vector of pixel data.
  CImg<double> extract_features(const string &filename)
    {
      return (CImg<double>(filename.c_str())).resize(size,size,1,3).unroll('x');
    }

  static const int size=20;  // subsampled image resolution
  map<string, CImg<double> > models; // trained models
};
