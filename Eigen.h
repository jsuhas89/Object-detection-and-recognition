
class Eigen : public Classifier
{
public:
  Eigen(const vector<string> &_class_list) : Classifier(_class_list) {}

  // Nearest neighbor training. All this does is read in all the images, resize
  // them to a common size, convert to greyscale, and dump them as vectors to a file
  virtual void train(const Dataset &filenames)
  {
    CImg<double> mat(1250,1600,1,1);
    CImg<double> meanMat(1,1600,1,1);
    int counter_1 = 0;
    ofstream samplefile;
    samplefile.open("SVM/Eigentrain.dat", std::ofstream::out | std::ofstream::app);
    int colCount = 0;
    double m = 0;
    double mean = 0;
    int s = 0;
    int k = 20;
    cout << "1" << endl;
    for(Dataset::const_iterator c_iter=filenames.begin(); c_iter != filenames.end(); ++c_iter){
        for(int i=0; i<c_iter->second.size(); i++,s++){
            CImg<double> testimage(c_iter->second[i].c_str());
            testimage = testimage.resize(40,40,1,1).unroll('x');



                for(int f=0;f<testimage.width();f++){
                for(int j=0;j<testimage.height();j++){
                        mat(s,f)= testimage(f,j);

                        }
                    }



        }
    }
    for(int x =0;x<1600;x++){
        for(int y=0;y<1250;y++){
            m = m + mat(y,x);
        }
        mean = m / 1250;
        meanMat(0,counter_1) = mean;
        counter_1 = counter_1 + 1;
    }
    cout << "2" << endl;
    CImg<double> covMat = (mat).operator-(meanMat);
    cout << "3" << endl;
    CImg<double> covar(1600,1600,1,1);
    CImg<double> ct(1600,1250,1,1);
    ct = covMat.get_transpose();
    covar = (covMat).operator*(ct);
    cout << "4" << endl;
    CImg<double> emptymat;
    CImg<double> emptyval;

    covar.symmetric_eigen(emptyval,emptymat);

    CImg<double> kMat = emptymat.get_columns(0,k-1);
    cout << "5" << endl;

    kMat = kMat.get_transpose();
    ofstream eigenvec("eigenVector.txt");
    for(int x=0;x<kMat.width();x++){
        for(int y=0;y<kMat.height();y++){
            eigenvec << kMat(x,y) << " ";
        }
        eigenvec << endl;
    }

    CImg<double> mul = (kMat).operator*(mat);
    CImg<double> finMat = mul.get_transpose();
    finMat.get_normalize(0,255).save_ascii("PCA");
    cout << "6" << endl;
        for(int y=0;y<1250;y++){
                if(y < 50){
                    samplefile << "1 ";
                    for(int x=0; x<k;x++){
                        if(finMat(y,x)<1)
                        samplefile << x+1 << ":" << finMat(y,x) << " ";
                    }
                    samplefile << "\n";
                }
                if(y >= 50 && y < 100){
                    samplefile << "2 ";
                    for(int x=0; x<k;x++){
                        if(finMat(y,x)<1)
                        samplefile << x+1 << ":" << finMat(y,x) << " ";
                    }
                    samplefile << "\n";
                }
                if(y >= 100 && y < 150){
                    samplefile << "3 ";
                    for(int x=0; x<k;x++){
                        if(finMat(y,x)<1)
                        samplefile << x+1 << ":" << finMat(y,x) << " ";
                    }
                    samplefile << "\n";
                }
                if(y >= 150 && y < 200){
                    samplefile << "4 ";
                    for(int x=0; x<k;x++){
                        if(finMat(y,x)<1)
                        samplefile << x+1 << ":" << finMat(y,x) << " ";
                    }
                    samplefile << "\n";
                }
                if(y >= 200 && y < 250){
                    samplefile << "5 ";
                    for(int x=0; x<k;x++){
                        if(finMat(y,x)<1)
                        samplefile << x+1 << ":" << finMat(y,x) << " ";
                    }
                    samplefile << "\n";
                }
                if(y >= 250 && y < 300){
                    samplefile << "6 ";
                    for(int x=0; x<k;x++){
                        if(finMat(y,x)<1)
                        samplefile << x+1 << ":" << finMat(y,x) << " ";
                    }
                    samplefile << "\n";
                }
                if(y >= 300 && y < 350){
                    samplefile << "7 ";
                    for(int x=0; x<k;x++){
                        if(finMat(y,x)<1)
                        samplefile << x+1 << ":" << finMat(y,x) << " ";
                    }
                    samplefile << "\n";
                }
                if(y >= 350 && y < 400){
                    samplefile << "8 ";
                    for(int x=0; x<k;x++){
                        if(finMat(y,x)<1)
                        samplefile << x+1 << ":" << finMat(y,x) << " ";
                    }
                    samplefile << "\n";
                }
                if(y >= 400 && y < 450){
                    samplefile << "9 ";
                    for(int x=0; x<k;x++){
                        if(finMat(y,x)<1)
                        samplefile << x+1 << ":" << finMat(y,x) << " ";
                    }
                    samplefile << "\n";
                }
                if(y >= 450 && y < 500){
                    samplefile << "10 ";
                    for(int x=0; x<k;x++){
                        if(finMat(y,x)<1)
                        samplefile << x+1 << ":" << finMat(y,x) << " ";
                    }
                    samplefile << "\n";
                }
                if(y >= 500 && y < 550){
                    samplefile << "11 ";
                    for(int x=0; x<k;x++){
                        if(finMat(y,x)<1)
                        samplefile << x+1 << ":" << finMat(y,x) << " ";
                    }
                    samplefile << "\n";
                }
                if(y >= 550 && y < 600){
                    samplefile << "12 ";
                    for(int x=0; x<k;x++){
                        samplefile << x+1 << ":" << finMat(y,x) << " ";
                    }
                    samplefile << "\n";
                }
                if(y >= 600 && y < 650){
                    samplefile << "13 ";
                    for(int x=0; x<k;x++){
                        samplefile << x+1 << ":" << finMat(y,x) << " ";
                    }
                    samplefile << "\n";
                }
                if(y >= 650 && y < 700){
                    samplefile << "14 ";
                    for(int x=0; x<k;x++){
                        samplefile << x+1 << ":" << finMat(y,x) << " ";
                    }
                    samplefile << "\n";
                }
                if(y >= 700 && y < 750){
                    samplefile << "15 ";
                    for(int x=0; x<k;x++){
                        samplefile << x+1 << ":" << finMat(y,x) << " ";
                    }
                    samplefile << "\n";
                }
                if(y >= 750 && y < 800){
                    samplefile << "16 ";
                    for(int x=0; x<k;x++){
                        samplefile << x+1 << ":" << finMat(y,x) << " ";
                    }
                    samplefile << "\n";
                }
                if(y >= 800 && y < 850){
                    samplefile << "17 ";
                    for(int x=0; x<k;x++){
                        samplefile << x+1 << ":" << finMat(y,x) << " ";
                    }
                    samplefile << "\n";
                }
                if(y >= 850 && y < 900){
                    samplefile << "18 ";
                    for(int x=0; x<k;x++){
                        samplefile << x+1 << ":" << finMat(y,x) << " ";
                    }
                    samplefile << "\n";
                }
                if(y >= 900 && y < 950){
                    samplefile << "19 ";
                    for(int x=0; x<k;x++){
                        samplefile << x+1 << ":" << finMat(y,x) << " ";
                    }
                    samplefile << "\n";
                }
                if(y >= 950 && y < 1000){
                    samplefile << "20 ";
                    for(int x=0; x<k;x++){
                        samplefile << x+1 << ":" << finMat(y,x) << " ";
                    }
                    samplefile << "\n";
                }
                if(y >= 1000 && y < 1050){
                    samplefile << "21 " << " ";
                    for(int x=0; x<k;x++){
                        samplefile << x+1 << ":" << finMat(y,x) << " ";
                    }
                    samplefile << "\n";
                }
                if(y >= 1050 && y < 1100){
                    samplefile << "22 ";
                    for(int x=0; x<k;x++){
                        samplefile << x+1 << ":" << finMat(y,x) << " ";
                    }
                    samplefile << "\n";
                }
                if(y >= 1100 && y < 1150){
                    samplefile << "23 ";
                    for(int x=0; x<k;x++){
                        samplefile << x+1 << ":" << finMat(y,x) << " ";
                    }
                    samplefile << "\n";
                }
                if(y >= 1150 && y < 1200){
                    samplefile << "24 ";
                    for(int x=0; x<k;x++){
                        samplefile << x+1 << ":" << finMat(y,x) << " ";
                    }
                    samplefile << "\n";
                }
                if(y >= 1200 && y < 1250){
                    samplefile << "25 ";
                    for(int x=0; x<k;x++){
                        samplefile << x+1 << ":" << finMat(y,x) << " ";
                    }
                    samplefile << "\n";
                }
        }




	samplefile.close();

    }




virtual void testSVM(const Dataset &filenames)
  {
    int k = 20;
    float precision = 0;
    int correct = 0;
    int incorrect = 0;
    ofstream testfile;
    testfile.open("SVM/Eigentest.dat", std::ofstream::out);
    for(Dataset::const_iterator c_iter=filenames.begin(); c_iter != filenames.end(); ++c_iter){
        for(int i=0; i<c_iter->second.size(); i++){
            CImg<double> testimage(c_iter->second[i].c_str());
            testimage = testimage.resize(40,40,1,1).unroll('x');
            testimage = testimage.get_transpose();
            string op;
            string op1;
            string className;
            ifstream eigenvec("eigenvec.txt");
            CImg<double> imagepca(1600,k);
            int counter1 = 0;
            int counter2 = 0;
            while(getline(eigenvec,op)){
                stringstream lines(op);
                double pca;
                while(lines >> pca){
                    imagepca(counter1,counter2) = pca;
                    counter1++;
                }
                counter1 = 0;
                counter2++;
            }
            CImg<double> imagepca1 = imagepca.operator*(testimage);
            CImg<double> imagepca2 = imagepca1.get_transpose();
            testfile << "1 ";
            for(int p=0;p<imagepca2.width();p++){
                testfile << p+1 << ":" << imagepca2(p,0) << " ";
            }
            testfile << "\n";
            system("cd SVM/ && ./svm_multiclass_classify Eigentest.dat model_eigen prediction");

            if(c_iter->first == "bagel"){
                className = "1";
            }
            else if(c_iter->first == "bread"){
                className = "2";
            }
            else if(c_iter->first == "brownie"){
                className = "3";
            }
            else if(c_iter->first == "chickennugget"){
                className = "4";
            }
            else if(c_iter->first == "churro"){
                className = "5";
            }
            else if(c_iter->first == "croissant"){
                className = "6";
            }
            else if(c_iter->first == "frenchfries"){
                className = "7";
            }
            else if(c_iter->first == "hamburger"){
                className = "8";
            }
            else if(c_iter->first == "hotdog"){
                className = "9";
            }
            else if(c_iter->first == "jambalaya"){
                className = "10";
            }
            else if(c_iter->first == "kungpaochicken"){
                className = "11";
            }
            else if(c_iter->first == "lasagna"){
                className = "12";
            }
            else if(c_iter->first == "muffin"){
                className = "13";
            }
            else if(c_iter->first == "paella"){
                className = "14";
            }
            else if(c_iter->first == "pizza"){
                className = "15";
            }
            else if(c_iter->first == "popcorn"){
                className = "16";
            }
            else if(c_iter->first == "pudding"){
                className = "17";
            }
            else if(c_iter->first == "salad"){
                className = "18";
            }
            else if(c_iter->first == "salmon"){
                className = "19";
            }
            else if(c_iter->first == "scone"){
                className = "20";
            }
            else if(c_iter->first == "spaghetti"){
                className = "21";
            }
            else if(c_iter->first == "sushi"){
                className = "22";
            }
            else if(c_iter->first == "taco"){
                className = "23";
            }
            else if(c_iter->first == "tiramisu"){
                className = "24";
            }
            else if(c_iter->first == "waffle"){
                className = "25";
            }
            ifstream eigenvec1("Eigentest.txt");
            while(getline(eigenvec1,op1)){
            }
            string pClass = op1.substr(0,op1.find(" "));
            if(pClass.compare(className) == 0){
                correct = correct + 1;
            }
            else{
                incorrect = incorrect + 1;
            }
            eigenvec.close();
        }
    }
    precision = correct/(correct + incorrect);
    cout << "Correct: " << correct << " Incorrect: " << incorrect << " Total: " << correct+incorrect << endl;
    cout << "Precion of the model = " << precision << endl;
	testfile.close();
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
