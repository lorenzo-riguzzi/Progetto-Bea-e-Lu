void Bea()
{
    TH1F *h1 = new TH1F("h1", "Compute", 6, 0.5, 5.5);
    TH1F *h2 = new TH1F("h2", "Nel mio lavoro, mi sento pieno/a di energia", 5, -0.5, 5.5);
    TH1F *h3 = new TH1F("h3", "Sono entusiasta del mio lavoro", 5, 0.5, 5.5);
    TH1F *h4 = new TH1F("h4", "Sono immerso/a nel mio lavoro", 5, 0.5, 5.5);

    gRandom->SetSeed();

    h1->SetFillColor(kBlue + 2);
    h1->GetXaxis()->SetBinLabel(1, "Mai");
    h1->GetXaxis()->SetBinLabel(2, "Quasi mai");
    h1->GetXaxis()->SetBinLabel(3, "Raramente");
    h1->GetXaxis()->SetBinLabel(4, "A volte");
    h1->GetXaxis()->SetBinLabel(5, "Molto spesso");
    h1->GetXaxis()->SetBinLabel(5, "Sempre");
    h1->GetYaxis()->SetTitle("Popolazione");

    h2->SetFillColor(kBlue + 2);
    h2->GetXaxis()->SetBinLabel(1, "Mai");
    h2->GetXaxis()->SetBinLabel(2, "Quasi mai");
    h2->GetXaxis()->SetBinLabel(3, "Raramente");
    h2->GetXaxis()->SetBinLabel(4, "A volte");
    h2->GetXaxis()->SetBinLabel(5, "Molto spesso");
    h2->GetXaxis()->SetBinLabel(5, "Sempre");
    h2->GetYaxis()->SetTitle("Popolazione");

    h3->SetFillColor(kBlue + 2);
    h3->GetXaxis()->SetBinLabel(1, "Mai");
    h3->GetXaxis()->SetBinLabel(2, "Quasi mai");
    h3->GetXaxis()->SetBinLabel(3, "Raramente");
    h3->GetXaxis()->SetBinLabel(4, "A volte");
    h3->GetXaxis()->SetBinLabel(5, "Molto spesso");
    h3->GetXaxis()->SetBinLabel(5, "Sempre");
    h3->GetYaxis()->SetTitle("Popolazione");

    h4->SetFillColor(kBlue + 2);
    h4->GetXaxis()->SetBinLabel(1, "Mai");
    h4->GetXaxis()->SetBinLabel(2, "Quasi mai");
    h4->GetXaxis()->SetBinLabel(3, "Raramente");
    h4->GetXaxis()->SetBinLabel(4, "A volte");
    h4->GetXaxis()->SetBinLabel(5, "Molto spesso");
    h4->GetXaxis()->SetBinLabel(5, "Sempre");
    h4->GetYaxis()->SetTitle("Popolazione");

     for(Int_t i{}; i < 409; i++){
        Double_t x1 = gRandom->Gaus(3.4792, 0.84930);
        Double_t x2 = gRandom->Gaus(3.34, 0.971);
        Double_t x3 = gRandom->Gaus(3.39, 1.014);
        Double_t x4 = gRandom->Gaus(3.70, 0.980);
        h1->Fill(x1);
        h2->Fill(x2);
        h3->Fill(x3);
        h4->Fill(x4);
    }

    cout << "COMPUTE:" << endl;
    cout << "Underflow: " << h1->GetBinContent(0) << " +/- " << h1->GetBinError(0) << endl;
    cout << "Mai: " << h1->GetBinContent(1) << " +/- " << h1->GetBinError(1) << endl;
    cout << "Quasi mai: " << h1->GetBinContent(2) << " +/- " << h1->GetBinError(2) << endl;
    cout << "Raramente: " << h1->GetBinContent(3) << " +/- " << h1->GetBinError(3) << endl;
    cout << "A volte: " << h1->GetBinContent(4) << " +/- " << h1->GetBinError(4) << endl;
    cout << "Molto spesso: " << h1->GetBinContent(5) << " +/- " << h1->GetBinError(5) << endl;
    cout << "Sempre: " << h1->GetBinContent(6) << " +/- " << h1->GetBinError(6) << endl;
    cout << "Overflow: " << h1->GetBinContent(7) << " +/- " << h1->GetBinError(7) << endl;
    cout << endl;

    cout << "Nel mio lavoro, mi sento pieno/a di energia:" << endl;
    cout << "Underflow: " << h2->GetBinContent(0) << " +/- " << h2->GetBinError(0) << endl;
    cout << "Mai: " << h2->GetBinContent(1) << " +/- " << h2->GetBinError(1) << endl;
    cout << "Quasi mai: " << h2->GetBinContent(2) << " +/- " << h2->GetBinError(2) << endl;
    cout << "Raramente: " << h2->GetBinContent(3) << " +/- " << h2->GetBinError(3) << endl;
    cout << "A volte: " << h2->GetBinContent(4) << " +/- " << h2->GetBinError(4) << endl;
    cout << "Molto spesso: " << h2->GetBinContent(5) << " +/- " << h2->GetBinError(5) << endl;
    cout << "Sempre: " << h2->GetBinContent(6) << " +/- " << h2->GetBinError(6) << endl;
    cout << "Overflow: " << h2->GetBinContent(7) << " +/- " << h2->GetBinError(7) << endl;
    cout << endl;

    cout << "Sono entusiasta del mio lavoro:" << endl;
    cout << "Underflow: " << h3->GetBinContent(0) << " +/- " << h3->GetBinError(0) << endl;
    cout << "Mai: " << h3->GetBinContent(1) << " +/- " << h3->GetBinError(1) << endl;
    cout << "Quasi mai: " << h3->GetBinContent(2) << " +/- " << h3->GetBinError(2) << endl;
    cout << "Raramente: " << h3->GetBinContent(3) << " +/- " << h3->GetBinError(3) << endl;
    cout << "A volte: " << h3->GetBinContent(4) << " +/- " << h3->GetBinError(4) << endl;
    cout << "Molto spesso: " << h3->GetBinContent(5) << " +/- " << h3->GetBinError(5) << endl;
    cout << "Sempre: " << h3->GetBinContent(6) << " +/- " << h3->GetBinError(6) << endl;
    cout << "Overflow: " << h3->GetBinContent(7) << " +/- " << h3->GetBinError(7) << endl;
    cout << endl;

    cout << "Sono immerso/a nel mio lavoro:" << endl;
    cout << "Underflow: " << h4->GetBinContent(0) << " +/- " << h4->GetBinError(0) << endl;
    cout << "Mai: " << h4->GetBinContent(1) << " +/- " << h4->GetBinError(1) << endl;
    cout << "Quasi mai: " << h4->GetBinContent(2) << " +/- " << h4->GetBinError(2) << endl;
    cout << "Raramente: " << h4->GetBinContent(3) << " +/- " << h4->GetBinError(3) << endl;
    cout << "A volte: " << h4->GetBinContent(4) << " +/- " << h4->GetBinError(4) << endl;
    cout << "Molto spesso: " << h4->GetBinContent(5) << " +/- " << h4->GetBinError(5) << endl;
    cout << "Sempre: " << h4->GetBinContent(6) << " +/- " << h4->GetBinError(6) << endl;
    cout << "Overflow: " << h4->GetBinContent(7) << " +/- " << h4->GetBinError(7) << endl;
    cout << endl;

    TF1 *f = new TF1("f", "gaus", -0.5, 5.5);

    TCanvas *c1 = new TCanvas();
    c1->Divide(2, 2);
    c1->cd(1);
    h1->Draw("HISTO");
    c1->cd(2);
    h2->Draw("HISTO");
    c1->cd(3);
    h3->Draw("HISTO");
    c1->cd(4);
    h4->Draw("HISTO");

    TCanvas *c2 = new TCanvas();
    c2->Divide(2, 2);
    c2->cd(1);
    h1->Draw("HISTO");
    f->SetParameter(1, 3.4792);
    f->SetParameter(2, 0.84930);
    h1->Fit("f");
    f->Draw("SAME");
    c2->cd(2);
    h2->Draw("HISTO");
    f->SetParameter(1, 3.34);
    f->SetParameter(2, 0.971);
    h2->Fit("f");
    f->Draw("SAME");
    c2->cd(3);
    h3->Draw("HISTO");
    f->SetParameter(1, 3.39);
    f->SetParameter(2, 1.014);
    h3->Fit("f");
    f->Draw("SAME");
    c2->cd(4);
    h4->Draw("HISTO");
    f->SetParameter(1, 3.70);
    f->SetParameter(2, 0.980);
    h4->Fit("f");
    f->Draw("SAME");
}