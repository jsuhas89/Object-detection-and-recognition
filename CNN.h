
class CNN : public Classifier
{
public:
  CNN(const vector<string> &_class_list) : Classifier(_class_list) {}

  // Nearest neighbor training. All this does is read in all the images, resize
  // them to a common size, convert to greyscale, and dump them as vectors to a file
  virtual void train(const Dataset &filenames)
  {
    for(Dataset::const_iterator c_iter=filenames.begin(); c_iter != filenames.end(); ++c_iter)
      {

	  cout << "Processing " << c_iter->first << endl;
	  // CImg<double> class_vectors(size*size*3, filenames.size(), 1);
      //vector<double> sample1;
      CImg<double> sample;
	  // convert each image to be a row of this "model" image
	  ofstream samplefile;
	  //CImgList<float> images;
	  samplefile.open("SVM/CNNtrain.dat", std::ofstream::out | std::ofstream::app);
	  if(c_iter->first == "bagel"){
	   string name = "bagel";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "1" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           //cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           //cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/
           pclose(fp);

      }
    }
    else if(c_iter->first == "bread"){
	string name = "bread";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "2" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           //cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           //cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }

    else if(c_iter->first == "brownie"){
	string name = "brownie";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "3" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           //cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           //cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/


                      pclose(fp);

      }
    }
    else if(c_iter->first == "chickennugget"){
	string name = "chickennugget";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "4" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           //cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           //cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/


                      pclose(fp);

      }
    }
    else if(c_iter->first == "churro"){
	string name = "churro";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "5" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           //cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           //cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "croissant"){
	string name = "croissant";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "6" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           //cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           //cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/


                      pclose(fp);

      }
    }
    else if(c_iter->first == "frenchfries"){
	string name = "frenchfries";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "7" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           //cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           //cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/


                      pclose(fp);

      }
    }
    else if(c_iter->first == "hamburger"){
	string name = "hamburger";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "8" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           //cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           //cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "hotdog"){
	string name = "hotdog";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "9" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           //cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           //cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "jambalaya"){
	string name = "jambalaya";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "10" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           //cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           //cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "kungpaochicken"){
	string name = "kungpaochicken";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "11" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           //cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           //cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "lasagna"){
	string name = "lasagna";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "12" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           //cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           //cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "muffin"){
	string name = "muffin";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "13" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           //cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           //cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "paella"){
	string name = "paella";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "14" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           //cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           //cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "pizza"){
	string name = "pizza";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "15" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           //cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           //cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/


                      pclose(fp);

      }
    }
    else if(c_iter->first == "popcorn"){
	string name = "popcorn";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "16" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           //cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           //cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/


                      pclose(fp);

      }
    }
    else if(c_iter->first == "pudding"){
	string name = "pudding";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "17" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/


                      pclose(fp);

      }
    }
    else if(c_iter->first == "salad"){
	string name = "salad";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "18" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/


                      pclose(fp);

      }
    }
    else if(c_iter->first == "salmon"){
	string name = "salmon";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "19" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/


                      pclose(fp);

      }
    }
    else if(c_iter->first == "scone"){
	string name = "scone";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "20" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "spaghetti"){
	string name = "spaghetti";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "21" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "sushi"){
	string name = "sushi";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "22" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "taco"){
	string name = "taco";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "23" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "tiramisu"){
	string name = "tiramisu";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "24" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "waffle"){
	string name = "waffle";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "25" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    samplefile.close();
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
	samplefile.open("SVM/CNNtest.dat", std::ofstream::out | std::ofstream::app);
	if(c_iter->first == "bagel"){
	string name = "bagel";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "1" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/
                      pclose(fp);

      }
    }
    else if(c_iter->first == "bread"){
	string name = "bread";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "2" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "brownie"){
	string name = "brownie";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "3" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/
                      pclose(fp);

      }
    }
    else if(c_iter->first == "chickennugget"){
	string name = "chickennugget";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "4" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/
                      pclose(fp);


      }
    }
    else if(c_iter->first == "churro"){
	string name = "churro";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "5" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "croissant"){
	string name = "croissant";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "6" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "frenchfries"){
	string name = "frenchfries";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "7" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "hamburger"){
	string name = "hamburger";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "8" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "hotdog"){
	string name = "hotdog";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "9" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "jambalaya"){
	string name = "jambalaya";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "10" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "kungpaochicken"){
	string name = "kungpaochicken";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "11" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "lasagna"){
	string name = "lasagna";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "12" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "muffin"){
	string name = "muffin";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "13" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "paella"){
	string name = "paella";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "14" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "pizza"){
	string name = "pizza";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "15" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "popcorn"){
	string name = "popcorn";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "16" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "pudding"){
	string name = "pudding";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "17" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "salad"){
	string name = "salad";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "18" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "salmon"){
	string name = "salmon";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "19" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "scone"){
	string name = "scone";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "20" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "spaghetti"){
	string name = "spaghetti";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "21" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "sushi"){
	string name = "sushi";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "22" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "taco"){
	string name = "taco";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "23" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }
    else if(c_iter->first == "tiramisu"){
	string name = "tiramisu";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "24" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/
                      pclose(fp);

      }
    }
    else if(c_iter->first == "waffle"){
	string name = "waffle";
	   int count = 0;
	   for(int i=0; i<c_iter->second.size(); i++)
       {
	       int counter1 = 0;
	       samplefile << "25" << " ";
	       std :: stringstream ss;
	       count = count + 1;
	       ss << count;
	       string stri;
	       ss >> stri;
	       //string stri = count.c_str();
	       string newName = name + stri + ".jpg";
           CImg<float> testimage(c_iter->second[i].c_str());
           testimage = testimage.resize(250,250,1,1);
           //cout << second;
           string path = "CNN/";
           string saver = path + newName;
           cout << saver << endl;
           testimage.get_normalize(0,255).save(saver.c_str());
           string first = "cd overfeat && ./bin/linux_64/overfeat -f /u/rkanchib/rkanchib-skeragod-jagadiss-a3/";
           string second = saver;
           string third = first + second;
           //system(third.c_str());
           FILE *fp = popen(third.c_str(), "r");
           float buf;
           int file_counter = 0;
           char buffer[10000];
           while((fscanf(fp,"%f",&buf)) != EOF){
               //counter1 = counter1 + 1;
               /*for(int j = 4; j < 10000; j++){
                    if(buf[j] != 0 || buf[j] != char(32)){
                    samplefile << counter1 << " : " <<  buf[j];
                  }
               }*/

               file_counter++;
               if(file_counter>3)
               {
                 sprintf(buffer," %d:%f", (file_counter-3),buf );
                 samplefile<<buffer;
               }



           }
           cout<<"Reached here"<<endl;
           samplefile <<"\n";
           //cout << sample1 << "\n";
           /*for(int x=0;x<sample.width();x++){
                for(int y=0;y<sample.height();y++){
                    if(sample(x,y) != 0)
                        samplefile << x+1 << ":" << sample(x,y) << " ";
                }
           }
           samplefile << "\n";*/

                      pclose(fp);

      }
    }

samplefile.close();

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
