class haar : public Classifier
{
public:
  haar(const vector<string> &_class_list) : Classifier(_class_list) {}

  virtual void testSVM(const Dataset &filenames){
	int i,j,l,m,p,q,s,x,y,w,h,sumw,sumg=0;
	int vec[1000][4], ivec[1250][1000];
	for (i=0;i<1000;i++){
		vec[i][0] = rand()%40;
		vec[i][1] = rand()%40;
		vec[i][2] = rand()%10;
		vec[i][3] = rand()%8;
	} 
	  
    for(Dataset::const_iterator c_iter=filenames.begin(); c_iter != filenames.end(); ++c_iter)
    {
	cout << "Processing " << c_iter->first << endl;
	//CImg<double> class_vectors(size*size*3, filenames.size(), 1);
	
	// convert each image to be a row of this "model" image
	for(int i=0; i<c_iter->second.size(); i++,s++) {//c_iter->second.size()
	  //class_vectors = class_vectors.draw_image(0, i, 0, 0, resize_image(c_iter->second[i]));
	  //class_vectors.save_png(("nn_model." + c_iter->first + ".png").c_str());
	  CImg<double> input_gray = resize_image(c_iter->second[i]);
	  for(j=0;j<1000;j++){
		  x= vec[j][0];
		  y= vec[j][1];
		  w= vec[j][2];
		  h= vec[j][3];
		  for(l=x;l<x+h;l++){
			  for(m=y;m<y+w;m++){
				  if(x+h<=40 && y+w<=40)
					sumw+= input_gray(l,m);
			  }
		  }
		  for(p=x+h;p<x+2*h;p++){
			  for(q=y;q<y+w;q++){
				  if(x+2*h<=40 && y+w<=40)
					sumg+= input_gray(p,q);
			  }
		  }
		  
		  ivec[s][j] = abs(sumw-sumg);
	  }
	  
    }
  }
  cout << "Row size of input vector " << s << endl;
  cout << "column size of input vector " << j << endl;
  cout<< "Writing data to the output file 'haartest.dat'" << endl; 
	ofstream samplefile;
	samplefile.open("SVM/haartest.dat", std::ofstream::out | std::ofstream::app);
	for(int t=0; t<s; t++)
    {
	samplefile << t+1 << " ";

           //sample = extract_features(c_iter->second[i].c_str());
           //for(int x=0;x<sample.width();x++){
                for(int tt=0;tt<j;tt++){
                    if(ivec[t][tt] != 0)
                        samplefile << tt+1 << ":" << ivec[t][tt] << " ";
                }
           samplefile << "\n";
      }
	  
	  cout<< "Writing complete. Call SVM classifier" << endl;  
	  samplefile.close();
  }

  virtual void train(const Dataset &filenames) 
  {
	int i,j,l,m,p,q,s,x,y,w,h,sumw,sumg=0;
	int vec[1000][4], ivec[1250][1000];
	for (i=0;i<1000;i++){
		vec[i][0] = rand()%40;
		vec[i][1] = rand()%40;
		vec[i][2] = rand()%10;
		vec[i][3] = rand()%8;
	} 
	  
    for(Dataset::const_iterator c_iter=filenames.begin(); c_iter != filenames.end(); ++c_iter)
    {
	cout << "Processing " << c_iter->first << endl;
	//CImg<double> class_vectors(size*size*3, filenames.size(), 1);
	
	// convert each image to be a row of this "model" image
	for(int i=0; i<c_iter->second.size(); i++,s++) {//c_iter->second.size()
	  //class_vectors = class_vectors.draw_image(0, i, 0, 0, resize_image(c_iter->second[i]));
	  //class_vectors.save_png(("nn_model." + c_iter->first + ".png").c_str());
	  CImg<double> input_gray = resize_image(c_iter->second[i]);
	  for(j=0;j<1000;j++){
		  x= vec[j][0];
		  y= vec[j][1];
		  w= vec[j][2];
		  h= vec[j][3];
		  for(l=x;l<x+h;l++){
			  for(m=y;m<y+w;m++){
					if(x+h<=40 && y+w<=40)
					sumw+= input_gray(l,m);
			  }
		  }
		  for(p=x+h;p<x+2*h;p++){
			  for(q=y;q<y+w;q++){
				  if(x+2*h<=40 && y+w<=40)
					sumg+= input_gray(p,q);
			  }
		  }
		  
		  ivec[s][j] = abs(sumw-sumg);
	  }
	  
    }
  }
  cout << "Row size of input vector " << s << endl;
  cout << "column size of input vector " << j << endl;
  cout<< "Writing data to the output file 'haar.dat'" << endl; 
	ofstream samplefile;
	samplefile.open("SVM/haar.dat", std::ofstream::out | std::ofstream::app);
	for(int t=0; t<s; t++)
    {
	samplefile << t+1 << " ";

           //sample = extract_features(c_iter->second[i].c_str());
           //for(int x=0;x<sample.width();x++){
                for(int tt=0;tt<j;tt++){
                    if(ivec[t][tt] != 0)
                        samplefile << tt+1 << ":" << ivec[t][tt] << " ";
                }
           samplefile << "\n";
      }
	  
	  cout<< "Writing complete. Call SVM classifier" << endl;
	samplefile.close();
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
