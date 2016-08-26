class SVM_c : public Classifier
{
public:
  SVM_c(const vector<string> &_class_list) : Classifier(_class_list) {}

  // Nearest neighbor training. All this does is read in all the images, resize
  // them to a common size, convert to greyscale, and dump them as vectors to a file
  virtual void train(const Dataset &filenames)
  {
    for(Dataset::const_iterator c_iter=filenames.begin(); c_iter != filenames.end(); ++c_iter)
      {
	    cout << "Processing " << c_iter->first << endl;
	    CImg<double> class_vectors(size*size*3, filenames.size(), 1);
	    CImg<double> sample;

	// convert each image to be a row of this "model" image
	ofstream samplefile;
	samplefile.open("SVM/baseline_c.dat", std::ofstream::out | std::ofstream::app);
	if(c_iter->first == "bagel"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "1" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "bread"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "2" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }

    else if(c_iter->first == "brownie"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "3" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "chickennugget"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "4" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "churro"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "5" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "croissant"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "6" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "frenchfries"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "7" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "hamburger"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "8" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "hotdog"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "9" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "jambalaya"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "10" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "kungpaochicken"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "11" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "lasagna"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "12" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "muffin"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "13" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "paella"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "14" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "pizza"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "15" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "popcorn"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "16" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "pudding"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "17" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "salad"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "18" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "salmon"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "19" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "scone"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "20" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "spaghetti"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "21" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "sushi"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "22" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }

    else if(c_iter->first == "taco"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "23" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "tiramisu"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "24" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "waffle"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "25" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }



    }
  }















virtual void testSVM(const Dataset &filenames)
  {
    for(Dataset::const_iterator c_iter=filenames.begin(); c_iter != filenames.end(); ++c_iter)
      {
	    cout << "Processing " << c_iter->first << endl;
	    CImg<double> class_vectors(size*size*3, filenames.size(), 1);
	    CImg<double> sample;

	// convert each image to be a row of this "model" image
	ofstream samplefile;
	samplefile.open("SVM/baseline_c_test.dat", std::ofstream::out | std::ofstream::app);
	if(c_iter->first == "bagel"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "1" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "bread"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "2" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }

    else if(c_iter->first == "brownie"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "3" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "chickennugget"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "4" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "churro"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "5" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "croissant"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "6" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "frenchfries"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "7" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "hamburger"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "8" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "hotdog"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "9" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "jambalaya"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "10" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "kungpaochicken"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "11" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "lasagna"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "12" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "muffin"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "13" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "paella"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "14" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "pizza"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "15" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "popcorn"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "16" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "pudding"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "17" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "salad"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "18" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "salmon"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "19" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "scone"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "20" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "spaghetti"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "21" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "sushi"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "22" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }

    else if(c_iter->first == "taco"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "23" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "tiramisu"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "24" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "waffle"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "25" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }



    }
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

  static const int size=40;  // subsampled image resolution
  map<string, CImg<double> > models; // trained models
};





class SVM_b : public Classifier
{
public:
  SVM_b(const vector<string> &_class_list) : Classifier(_class_list) {}

  // Nearest neighbor training. All this does is read in all the images, resize
  // them to a common size, convert to greyscale, and dump them as vectors to a file
  virtual void train(const Dataset &filenames)
  {
    for(Dataset::const_iterator c_iter=filenames.begin(); c_iter != filenames.end(); ++c_iter)
      {
	    cout << "Processing " << c_iter->first << endl;
	    CImg<double> class_vectors(size*size*3, filenames.size(), 1);
	    CImg<double> sample;

	// convert each image to be a row of this "model" image
	ofstream samplefile;
	samplefile.open("SVM/baseline_b.dat", std::ofstream::out | std::ofstream::app);
	if(c_iter->first == "bagel"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "1" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "bread"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "2" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }

    else if(c_iter->first == "brownie"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "3" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "chickennugget"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "4" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "churro"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "5" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "croissant"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "6" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "frenchfries"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "7" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "hamburger"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "8" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "hotdog"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "9" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "jambalaya"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "10" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "kungpaochicken"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "11" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "lasagna"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "12" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "muffin"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "13" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "paella"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "14" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "pizza"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "15" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "popcorn"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "16" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "pudding"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "17" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "salad"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "18" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "salmon"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "19" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "scone"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "20" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "spaghetti"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "21" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "sushi"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "22" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }

    else if(c_iter->first == "taco"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "23" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "tiramisu"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "24" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "waffle"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "25" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }



    }
  }















virtual void testSVM(const Dataset &filenames)
  {
    for(Dataset::const_iterator c_iter=filenames.begin(); c_iter != filenames.end(); ++c_iter)
      {
	    cout << "Processing " << c_iter->first << endl;
	    CImg<double> class_vectors(size*size*3, filenames.size(), 1);
	    CImg<double> sample;

	// convert each image to be a row of this "model" image
	ofstream samplefile;
	samplefile.open("SVM/baseline_b_test.dat", std::ofstream::out | std::ofstream::app);
	if(c_iter->first == "bagel"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "1" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "bread"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "2" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }

    else if(c_iter->first == "brownie"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "3" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "chickennugget"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "4" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "churro"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "5" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "croissant"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "6" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "frenchfries"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "7" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "hamburger"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "8" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "hotdog"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "9" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "jambalaya"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "10" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "kungpaochicken"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "11" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "lasagna"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "12" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "muffin"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "13" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "paella"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "14" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "pizza"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "15" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "popcorn"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "16" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "pudding"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "17" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "salad"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "18" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "salmon"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "19" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "scone"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "20" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "spaghetti"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "21" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "sushi"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "22" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }

    else if(c_iter->first == "taco"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "23" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "tiramisu"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "24" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }
    else if(c_iter->first == "waffle"){
	for(int i=0; i<c_iter->second.size(); i++)
    {
	samplefile << "25" << " ";

           sample = extract_features(c_iter->second[i].c_str());
           for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";
      }
    }



    }
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
      return (CImg<double>(filename.c_str())).resize(size,size,1,1).unroll('x');
    }

  static const int size=40;  // subsampled image resolution
  map<string, CImg<double> > models; // trained models
};
