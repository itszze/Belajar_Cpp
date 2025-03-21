/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    
    string opsi;
    int usia;
    int tahunlahir;
    int tanggal;
    int bulan;
    int bulanlahir;
    
    int tahunsekarang;
    string ulang;
    string lanjutkan;
    string nama;
    
    
    while (true){

    cout << "\033[2J\033[1;1H";
    
    cout << endl;

    cout <<"   ------------------------------------------" << endl;
    cout <<"   = Nama      : Meyze HadiShopia           =" << endl;
    cout <<"   = Nim       : 2023080188                 =" << endl;
    cout <<"   = Instagram : @itsmeyje                   =" << endl;
    cout <<"   ------------------------------------------" << endl << endl;


    cout << "  ===========================================" << endl;
    cout << "  =   >>>>>> SOAL UJIAN PRAKTIKUM <<<<<<    =" << endl;
    cout << "  ===========================================" << endl;
    cout << "  =  1.Menghitung umur                      =" << endl;
    cout << "  =  2.Konversi nilai ke huruf              =" << endl;
    cout << "  =  3.Menghitung uang pecahan              =" << endl;
    cout << "  =  4.Keterangan catatan soal [tambahan]   =" << endl;
    cout << "  =  5.Game (untuk soal nomor 2) [tambahan] =" << endl;
    cout << "  ===========================================" << endl << endl;
    
    
    string opsi;

    cout << "  Pilih opsi yang ingin di check : ";
    cin >> opsi;
    
    if (opsi == "1"){
        

    cout << "\033[2J\033[1;1H";
    
    do {      
      
    cout << "\033[2J\033[1;1H";

    cout << " ===============================================================  " << endl;
    cout << " =  1 2 3 4 5 6 7 8 9 << MENGHITUNG UMUR >> 9 8 7 6 5 4 3 2 1  =  " << endl;
    cout << " ===============================================================  " << endl << endl;
    
    cout << "                        Penjelasan soal:                          " << endl;
    cout << "          Menghitung umur berdasarkan tahun saat ini,             " << endl;
    cout << "    misal input tahun 2000 maka output yang diharapkan adalah     " << endl;
    cout << "                       24 Tahun (2024-2000)                       " << endl;
    cout << " ---------------------------------------------------------------  " << endl << endl;
    
    cout << "               <<< ISI BIODATA TERLEBIH DAHULU >>>                " << endl << endl << endl;
    
    cout << " Silahkan masukkan namamu <nama pendek>    : ";
    cin  >> nama;

    cout << " Silahkan masukkan angka <tanggal> lahirmu : ";
    cin  >> tanggal;
        
    cout << " Silahkan masukkan angka <bulan> lahirmu   : ";
    cin  >> bulan;
        
    cout << " Silahkan masukkan <tahun> lahirmu         : ";
    cin  >> tahunlahir;
    
    cout << " Silahkan masukkan tahun sekarang          : ";
    cin  >> tahunsekarang;
     
    cout << endl;
    
    // Menampilkan karakter zodiak
    if (tanggal <= 20 && bulan == 1 || tanggal <= 18 && bulan == 2)
    {
    cout << " ============================================================" << endl;    
    cout << " =    Zodiakmu adalah aquarius (20 januari - 18 februari)   =" << endl;
    cout << " ============================================================" << endl;
    cout << "    Aquarius adalah zodiak yang sangat unik dan inovatif.    " << endl;
    cout << "  Mereka suka mengejar ide-ide baru dan memiliki keinginan   " << endl;
    cout << "   keinginan yang kuat untuk membantu orang lain. Aquarius   " << endl;
    cout << "     juga dikenal karena kepintarannya dan idealismenya      " << endl;
    cout << "  Mereka suka berpikir di luar kotak dan memiliki kemampuan  " << endl;
    cout << "    untuk melihat potensi dalam setiap situasi. Namun,       " << endl;
    cout << "  Aquarius terkadang terlalu keras kepala dan sulit untuk    " << endl; 
    cout << "  menerima ide orang lain. Mereka juga cenderung terlalu     " << endl;
    cout << "  individualis dan sulit untuk berkomitmen dalam hubungan.   " << endl;
    
    }
    else if (tanggal <= 19 && bulan == 2 || tanggal <= 20 && bulan == 3){

    cout << " ============================================================ " << endl;    
    cout << " =     Zodiakmu adalah pisces (19 februari - 20 maret)      = " << endl;
    cout << " ============================================================ " << endl;
    cout << "  Pisces adalah macam-macam zodiak yang sangat empatik dan    " << endl;
    cout << " intuitif. Mereka suka mengejar mimpi dan memiliki kemampuan  " << endl;
    cout << "   untuk merasakan emosi orang lain. Pisces juga dikenal      " << endl;
    cout << " karena kreativitas dan kepekaannya. Mereka suka menghargai   " << endl;
    cout << "   keseimbangan dalam hidup dan memiliki kemampuan untuk      " << endl;
    cout << "    beradaptasi dengan berbagai situasi. Namun, Pisces        " << endl;
    cout << " terkadang terlalu sensitif dan mudah terluka oleh kata-kata  " << endl;
    cout << " orang lain. Mereka juga cenderung mudah terbawa suasana dan  " << endl;
    cout << "         sulit untuk membuat keputusan yang tegas.            " << endl;
    
    }
    else if (tanggal <= 21 && bulan == 3 || tanggal <= 19 && bulan == 4){
        
    cout << " ==========================================================  " << endl;    
    cout << " =      Zodiakmu adalah aries (21 maret - 19 april)       =  " << endl;
    cout << " ==========================================================  " << endl;
    cout << " Aries adalah zodiak yang dianggap penuh semangat dan berani." << endl;
    cout << "    Mereka suka menantang diri sendiri dan sering menjadi    " << endl;
    cout << "   pemimpin dalam situasi apapun. Aries juga dikenal karena  " << endl;
    cout << "    keberanian dan inisiatifnya. Mereka suka menjadi yang    " << endl;
    cout << "     terdepan dan selalu siap menghadapi tantangan baru.     " << endl;
    cout << "     Aries sangat antusias dan energik, namun terkadang      " << endl;
    cout << "  cenderung agresif dan impulsif. Mereka juga dapat menjadi  " << endl;
    cout << "         pemarah dan terkadang terlalu keras kepala.         " << endl;
    
    }
    else if (tanggal <= 20 && bulan == 4 || tanggal <= 20 && bulan == 5){
        
    cout << " ==========================================================  " << endl;    
    cout << " =      Zodiakmu adalah taurus (20 april - 20 mei)       =   " << endl;
    cout << " ==========================================================  " << endl;
    cout << "   Taurus adalah macam-macam zodiak yang dianggap kuat dan   " << endl;
    cout << "    stabil. Mereka sangat praktis dan cenderung memiliki     " << endl;
    cout << "    ketahanan yang luar biasa. Taurus juga dikenal karena    " << endl;
    cout << "     keteguhan dan kesetiaannya. Mereka suka menghargai      " << endl;
    cout << "    keamanan dan kenyamanan, dan selalu siap bekerja keras   " << endl;
    cout << "     untuk mencapai tujuan mereka. Namun, Taurus terkadang   " << endl;
    cout << "      terlalu keras kepala dan terlalu meremehkan risiko,    " << endl;
    cout << "        sehingga sulit untuk berubah dalam situasi yang      " << endl;
    cout << "                    memerlukan penyesuaian.                  " << endl;

    }
    else if (tanggal <= 21 && bulan == 5 || tanggal <= 20 && bulan == 6){
    
        
    cout << " ==========================================================  " << endl;    
    cout << " =      Zodiakmu adalah gemini (21 mei - 20 juni)         =  " << endl;
    cout << " ==========================================================  " << endl;
    cout << "    Gemini adalah zodiak yang sangat suka bersosialisasi.    " << endl;
    cout << "   Mereka suka mengobrol dan memiliki banyak teman. Gemini   " << endl;
    cout << "    juga dikenal karena kecerdasannya dan kemampuan untuk    " << endl;
    cout << "  belajar dengan cepat. Mereka sangat adaptif dan fleksibel, " << endl;
    cout << "   dan selalu terbuka terhadap hal-hal baru. Namun, Gemini   " << endl;
    cout << "  terkadang terlalu cerewet dan sulit untuk tetap fokus pada " << endl;
    cout << " satu hal. Mereka juga cenderung suka berganti pikiran dengan" << endl;
    cout << "  cepat dan sulit untuk mempertahankan komitmen dalam jangka " << endl;
    cout << "                        waktu yang lama.                     " << endl;
    
    }
    else if (tanggal <= 21 && bulan == 6 || tanggal <= 22 && bulan == 7){
        
    cout << " ==========================================================  " << endl;    
    cout << " =      Zodiakmu adalah cancer (21 juni - 22 juli)         = " << endl;
    cout << " ==========================================================  " << endl;
    cout << "  Cancer adalah zodiak yang sangat emosional dan sensitif.   " << endl;
    cout << "  Mereka sangat perhatian terhadap orang lain dan cenderung  " << endl;
    cout << "    sangat memperdulikan perasaan orang lain. Cancer juga    " << endl;
    cout << "   dikenal karena kesetiaannya dan kreativitasnya. Mereka    " << endl;
    cout << "   suka mengekspresikan perasaan mereka secara terbuka dan   " << endl;
    cout << "   selalu siap membantu orang lain. Namun, Cancer terkadang  " << endl;
    cout << "   terlalu memperdulikan perasaan mereka sendiri dan sulit   " << endl;
    cout << "   untuk melepaskan masa lalu. Mereka juga cenderung sulit   " << endl;
    cout << "   untuk mempertahankan keseimbangan emosional yang sehat    " << endl;
    
    }
    else if (tanggal <= 23 && bulan == 7 || tanggal <= 22 && bulan == 8){
        
    cout << " ==========================================================  " << endl;    
    cout << " =      Zodiakmu adalah leo (23 juli - 22 agustus)         = " << endl;
    cout << " ==========================================================  " << endl;
    cout << " Leo adalah macam-macam zodiak yang dianggap penuh semangat  " << endl;
    cout << " dan percaya diri. Mereka suka menjadi pusat perhatian dan   " << endl;
    cout << " selalu ingin menjadi yang terbaik dalam segala hal. Leo     " << endl;
    cout << " juga dikenal karena keberanian dan kreativitasnya. Mereka   " << endl;
    cout << " suka memimpin dan menjadi inspirasi bagi orang lain. Namun, " << endl;
    cout << "   Leo terkadang terlalu dominan dan egois, sehingga sulit   " << endl;
    cout << "     untuk mendengarkan pendapat orang lain. Mereka juga     " << endl;
    cout << "    cenderung suka bersikap sombong dan terlalu fokus pada   " << endl;
    cout << "                 kesuksesan dan popularitas.                 " << endl;
    
    }
    else if (tanggal <= 23 && bulan == 8 || tanggal <= 22 && bulan == 9){
        
    cout << " ==========================================================  " << endl;    
    cout << " =    Zodiakmu adalah virgo (23 agustus - 22 september)   =  " << endl;
    cout << " ==========================================================  " << endl;
    cout << " Virgo adalah zodiak yang sangat analitis dan perfeksionis.  " << endl;
    cout << " Mereka suka berfokus pada detail dan selalu siap bekerja    " << endl;
    cout << "  keras untuk mencapai tujuan mereka. Virgo juga dikenal     " << endl;
    cout << "    karena kecerdasannya dan ketepatannya. Mereka suka       " << endl;
    cout << "     menghargai keseimbangan dalam hidup dan memiliki        " << endl;
    cout << "   kemampuan untuk memecahkan masalah dengan cepat. Namun,   " << endl;
    cout << "   Virgo terkadang terlalu kritis dan sulit untuk menerima   " << endl;
    cout << "   kekurangan dalam diri mereka sendiri maupun orang lain.   " << endl;
    cout << "    Mereka juga cenderung terlalu khawatir dan mengalami     " << endl;
    cout << "                kecemasan yang berlebihan.                   " << endl;
        
    }
    else if (tanggal <= 23 && bulan == 9 || tanggal <= 22 && bulan == 10){
        
    cout << " ==========================================================  " << endl;    
    cout << " =    Zodiakmu adalah libra (23 september - 22 oktober)   =  " << endl;
    cout << " ==========================================================  " << endl;
    cout << "   Libra adalah zodiak yang sangat artistik dan harmonis.    " << endl;
    cout << "   Mereka suka mengejar keindahan dan memiliki kemampuan     " << endl;
    cout << " untuk membangun hubungan yang seimbang dan harmonis dengan  " << endl;
    cout << "     orang lain. Libra juga dikenal karena keadilan dan      " << endl;
    cout << "  diplomasi mereka. Mereka suka mempertimbangkan kedua sisi  " << endl;
    cout << " dalam situasi apapun dan selalu siap membantu menyelesaikan " << endl;
    cout << "   konflik. Namun, Libra terkadang terlalu tidak pasti dan   " << endl;
    cout << "  sulit untuk membuat keputusan. Mereka juga cenderung mudah " << endl;
    cout << "     terpengaruh oleh opini orang lain dan sulit untuk       " << endl;
    cout << "        mempertahankan keputusan yang sudah dibuat.          " << endl;
        
    }
    else if (tanggal <= 23 && bulan == 10 || tanggal <= 21 && bulan == 11){
        
    cout << " ==========================================================  " << endl;    
    cout << " =   Zodiakmu adalah scorpio (23 oktober - 22 november)   =  " << endl;
    cout << " ==========================================================  " << endl;
    cout << "    Scorpio adalah macam-macam zodiak yang penuh gairah.     " << endl;
    cout << "   Mereka suka mengejar hal-hal yang berharga dan sangat     " << endl;
    cout << "  terikat dengan emosi mereka. Scorpio juga dikenal karena   " << endl;
    cout << "  keberanian dan ketegasannya. Mereka suka mengambil risiko  " << endl;
    cout << "  dan memiliki kemampuan untuk melihat melampaui permukaan.  " << endl;
    cout << "   Namun, Scorpio terkadang terlalu pendiam dan sulit untuk  " << endl;
    cout << "   menunjukkan perasaan mereka secara terbuka. Mereka juga   " << endl;
    cout << "     cenderung mudah cemburu dan posesif dalam hubungan.     " << endl;
        
    }
    else if (tanggal <= 22 && bulan == 11 || tanggal <= 21 && bulan == 12){
        
    cout << " ==========================================================  " << endl;    
    cout << " = Zodiakmu adalah sagitarius (23 november - 22 november) =  " << endl;
    cout << " ==========================================================  " << endl;
    cout << "    Sagitarius adalah zodiak yang sangat bersemangat dan     " << endl;
    cout << "  petualang. Mereka suka mengeksplorasi dunia dan memiliki   " << endl;
    cout << "      keinginan yang kuat untuk belajar dan berkembang.      " << endl;
    cout << " Sagitarius juga dikenal karena optimisme dan keberaniannya. " << endl;
    cout << "  Mereka suka melihat sisi positif dalam situasi apapun dan  " << endl;
    cout << "  selalu siap menghadapi tantangan baru. Namun, Sagitarius   " << endl;
    cout << "   terkadang terlalu impulsif dan sulit untuk fokus pada     " << endl;
    cout << "     satu hal. Mereka juga cenderung terlalu jujur dan       " << endl;
    cout << "         kadang-kadang menyakiti perasaan orang lain.        " << endl;
    
    }
    else if (tanggal <= 22 && bulan == 12 || tanggal <= 19 && bulan == 1){   
        
    cout << " ==========================================================  " << endl;    
    cout << " =  Zodiakmu adalah capricorn (22 november - 19 januari)  =  " << endl;
    cout << " ==========================================================  " << endl;
    cout << "  Capricorn adalah zodiak yang sangat ambisius dan praktis.  " << endl;
    cout << "  Mereka suka berfokus pada tujuan dan bekerja keras untuk   " << endl;
    cout << "    mencapai kesuksesan. Capricorn juga dikenal karena       " << endl;
    cout << "   ketekunan dan disiplin mereka. Mereka suka menghargai     " << endl;
    cout << "   keseimbangan dalam hidup dan memiliki kemampuan untuk     " << endl;
    cout << "  membuat rencana dan melaksanakannya dengan sukses. Namun,  " << endl;
    cout << "    Capricorn terkadang terlalu serius dan sulit untuk       " << endl;
    cout << "  bersenang-senang. Mereka juga cenderung terlalu kaku dan   " << endl;
    cout << "         tidak fleksibel dalam pandangan hidup.              " << endl;
    
    }
    else{
    cout << "                Error,masukkan anda salah";
    
    }
    
    cout << endl;
    
    // Menghitung Usia
    usia =  tahunsekarang-tahunlahir;
    

    //Menampilkan usia
    cout << " = = = = = = = =  >===== Keterangan =====<  = = = = = = = =   " << endl;
    
    cout << "          ======================================" << endl;
    cout << "          Halo " << nama << ", Usiamu kini adalah " << usia << " Tahun" << endl;
    cout << "          ======================================"<< endl << endl;
    
    cout << "                 Mau coba lagi ? (y/n) : ";
    cin >> ulang;
    
    }while(ulang == "y");
    
     cout << endl;
     
     cout << "              KETIK APA SAJA UNTUK KELUAR : ";
     cin >> lanjutkan; 
        
     
      continue;
    }
    
    cout << "\033[2J\033[1;1H";

    
    if (opsi == "2"){  

    int nilai;
    string konversi;
    string ulang;
    string nama;
        
    do {
    
    cout << "\033[2J\033[1;1H";

    cout << " ========================================" << endl;
    cout << " =      KONVERSI NILAI KE HURUF         =" << endl;
    cout << " ========================================" << endl << endl;
    cout << "            Penjelasan soal:             " << endl;
    cout << "        konversi nilai ke huruf          " << endl;
    cout << "     mengikuti aturan berikut ini:       " << endl;
    cout << "-----------------------------------------" << endl;
    cout << "                                         " << endl;
    cout << " - Nilai antara 100-80 outputnya (A)     " << endl;
    cout << " - Nilai antara 79-69 outputnya  (B)     " << endl;
    cout << " - Nilai antara 59-40 outputnya  (C)     " << endl;
    cout << " - Nilai antara 39-20 outputnya  (D)     " << endl;
    cout << " - Nilai antara 19-0 outputnya   (E)     " << endl;
    cout << " ----------------------------------------" << endl << endl;
    
    
    cout << " Silahkan masukkan nama anda      : ";
    cin >> nama;

    cout << " Silahkan masukkan angka nilainya : ";
    cin >> nilai;

    if(nilai >= 80 && nilai <= 100)
    
    {
    konversi = "A";
    }
    
    else if(nilai >= 60 && nilai <= 79)
    
    {
    konversi = "B";
    }
    
    else if(nilai >= 40 && nilai <= 59)
    
    {
    konversi = "C";
    }
    
    else if(nilai >= 20 && nilai <= 39)
    
    {
    konversi = "D";
    }
    
    else if(nilai >= 0 && nilai <= 19)
    
    {
    konversi = "E";
    
    }
    
    cout << endl;
    cout << "  = = =  >===== Keterangan =====<  = = =    " << endl;

    cout << " ========================================" << endl;
    cout << " | nilaimu         : " << nilai <<  "                 |" << endl;
    cout << " ----------------------------------------" << endl;
    cout << " | predikat        : " << konversi<<"                  |" << endl;
    cout << " ========================================" << endl << endl;

    cout << "-----------------------------------------" << endl;

    if (nilai<40)
    {
    cout << " Halo " << nama << " , Mohon maaf kamu tidak lulus. " << endl;
    }
    else {
    cout << " Halo " << nama << " , Selamat kamu lulus! " << endl;
    
    cout << "----------------------------------------" << endl << endl;
     
    cout << "       Mau coba lagi ? (y/n) : ";
    cin >> ulang;
    
}
    
    }while(ulang == "y");
    
     cout << endl;
     
     cout << "   KETIK APA SAJA UNTUK KELUAR : ";
     cin >> lanjutkan; 
        
     
      continue;
    }
    
    cout << "\033[2J\033[1;1H";

    
    if (opsi == "3"){  

    int nominal;
    int uang;
    int satuan;
    int uang100, uang50, uang20, uang10, uang5, uang2k, uang1k, uanggope, uang1p;
    
    cout << endl;
    
    do {
        
    cout << "\033[2J\033[1;1H";

    cout << " ============================================" << endl;
    cout << "    >>>>>  Menghitung uang pecahan  <<<<<    " << endl;
    cout << " ============================================" << endl << endl;
    
    cout << "               Penjelasan soal:              " << endl;
    cout << "          Contoh input (135000) maka "         << endl;
    cout << "        output yang diharapkan adalah:       " << endl;
    cout << "                                             " << endl;
    cout << "             - 1 Lembar 100000               " << endl;
    cout << "             - 1 Lembar 20000                " << endl;
    cout << "             - 1 Lembar 10000                " << endl;
    cout << "             - 1 Lembar 5000                 " << endl;
    cout << " --------------------------------------------" << endl;
    
    cout <<"  Ketik nominal rupiah yang ingin dirincikan  " << endl;
    cout <<"  disini --> ";
    cin  >>   uang;
    cout << " --------------------------------------------" << endl;
    
    uang100 = uang/100000;
    satuan=uang%100000;
    
    uang50 = satuan/50000;
    satuan=satuan%50000;

    uang20 = satuan/20000;
    satuan=satuan%20000;

    uang10 = satuan/10000;
    satuan=satuan%10000;

    uang5 = satuan/5000;
    satuan=satuan%5000;

    uang2k = satuan/2000;
    satuan=satuan%2000;

    uang1k = satuan/1000;
    satuan=satuan%1000;

    uanggope = satuan/500;
    satuan=satuan%500;
    
    uang1p = satuan/100;
    satuan=satuan%100;

    cout << endl;

    cout << " = = = = = >===== Keterangan =====<  = = = = =    " << endl << endl;

    cout << " ============================================" << endl;
    cout << "             Uangmu Rp. " << uang                << endl;
    cout << " --------------------------------------------" << endl;
    cout << "           <<<<  Terdiri dari  >>>>          " << endl;
    cout << " --------------------------------------------" << endl;
    cout << " Rp.100000 (seratus ribu rupiah)   : " << uang100  << " Lembar" << endl;
    cout << " Rp.50000 (lima puluh ribu rupiah) : " << uang50   << " Lembar" << endl;
    cout << " Rp.20000 (dua puluh ribu rupiah)  : " << uang20   << " Lembar" << endl;
    cout << " Rp.10000 (sepuluh ribu rupiah)    : " << uang10   << " Lembar" << endl;
    cout << " Rp.5000 (lima ribu rupiah)        : " << uang5    << " Lembar" << endl;
    cout << " Rp.2000 (dua ribu rupiah)         : " << uang2k   << " Lembar" << endl;
    cout << " Rp.1000 (seribu rupiah)           : " << uang1k   << " Lembar" << endl;
    cout << " Rp.500 (lima ratus perak)         : " << uanggope << " Lembar" << endl;
    cout << " Rp.100 (seratus perak)            : " << uang1p   << " Lembar" << endl;
    cout << " --------------------------------------------" << endl;
    cout << "             T H A N K  Y O U : )    " << endl << endl;

    cout << "          Mau coba lagi ? (y/n) : ";
    cin  >> ulang;
    
    }while (ulang == "y");

    cout << endl;
    
    cout << "       KETIK APA SAJA UNTUK KELUAR : ";
    cin >> lanjutkan; 
        
     
      continue;
    }

    if (opsi == "4"){  

    cout << " ================================================" << endl;
    cout << "       <<<<< Keterangan catatan soal >>>>>       " << endl;
    cout << " ================================================" << endl << endl;
    
    cout << " 1. Tampilan input atau output dapat ditambahkan" << endl;
    cout << "    agar terlihat user friendly                 " << endl;
    cout << " 2. Pastikan program dapat berjalan dengan      " << endl;
    cout << "    normal tanpa ada bug                        " << endl;
    cout << " 3. Diperbolehkan untuk menambahkan fitur agar  " << endl;
    cout << "    sistem yang dibuat lebih optimal            " << endl;
    cout << " 4. source code dikirim bentuk zip dengan ke    " << endl;
    cout << "    link berikut ini https://shorturl.at/cjzSV  " << endl;
    cout << " 5. Maksimal pengerjaan H+3 dari jadwal UAS     " << endl;
    cout << "    (Jika tidak mengerjakan bernilai 0 dan tidak" << endl;
    cout << "    menerima alasan apapun belum mengerjakan soal"<< endl;
    cout << " 6. Jika ditemukan kesamaan code maka mahasiswa/i" << endl;
    cout << "    yang bersangkutan akan mendapatkan nilai 0"   << endl;
    cout << " ================================================="<< endl << endl;
    
     cout << endl;
     
     cout << "              KETIK APA SAJA UNTUK KELUAR : ";
     cin >> lanjutkan; 
        
     
      continue;
    }
    
    cout << "\033[2J\033[1;1H";

    
    if (opsi == "5"){  

    cout << endl;
    cout << " <<============== << W E L C O M E   T O   G A M E >> ==============>>" << endl << endl << endl;
    
    string bermain;
    cout << "    Ketik apa saja untuk bermain : ";
    cin >> bermain;
        
    cout << "\033[2J\033[1;1H";

    string answers1, answers2, answers3, answers4, answers5;
    string answers;
    int score = 0; // Nilai awal sebelum penambahan atau pengurangan

    // Soal 1
    cout << endl;
    cout << " <<============== << W E L C O M E   T O   G A M E >> ==============>>" << endl << endl << endl;

    cout << " 1. Sebutkan sila ketiga dalam Pancasil?" << endl;
    cout << "    a. Persatuan Indonesia" << endl;
    cout << "    b. burung garuda" << endl;
    cout << "    c. ketuhanan yang maha esa" << endl;
    char answer1;
    
    cout << endl;

    cout << "    Jawab: ";
    cin >> answer1;
    
    if (answer1 == 'a') {
        score += 20;
    }
    
    cout << "\033[2J\033[1;1H";
    

    // Soal 2
    
    cout << endl;
    cout << " <<============== << W E L C O M E   T O   G A M E >> ==============>>" << endl << endl << endl;
    
    cout << " 2. Siapa presiden kedua Indonesia?" << endl;
    cout << "    a. Soekarno" << endl;
    cout << "    b. Soeharto" << endl;
    cout << "    c. Bj habibie" << endl;
    char answer2;
    
    cout << endl;

    cout << "    Jawab: ";
    cin >> answer2;
    
    if (answer2 == 'b') {
        score += 20;
    }
    
    cout << "\033[2J\033[1;1H";
    
    // Soal 3
    
    cout << endl;
    cout << " <<============== << W E L C O M E   T O   G A M E >> ==============>>" << endl << endl << endl;
    
    cout << " 3. Apa ibu kota Papua?" << endl;
    cout << "    a. Papua" << endl;
    cout << "    b. Kepulauan riau" << endl;
    cout << "    c. Jayapura" << endl;
    char answer3;

    cout << endl;

    cout << "    Jawab: ";
    cin >> answer3;
    
    if (answer3 == 'c') {
        score += 20;
    }
    
    cout << "\033[2J\033[1;1H";


    // Soal 4
    
    cout << endl;
    cout << " <<============== << W E L C O M E   T O   G A M E >> ==============>>" << endl << endl << endl;
    
    cout << " 4. Apa nama benua yang paling luas di dunia?" << endl;
    cout << "    a. Afrika" << endl;
    cout << "    b. Asia" << endl;
    cout << "    c. Australia" << endl;
    char answer4;

    cout << endl;

    cout << "    Jawab: ";
    cin >> answer4;
    
    if (answer4 == 'b') {
        score += 20;
    }

    cout << "\033[2J\033[1;1H";

    // Soal 5
    
    cout << endl;
    cout << " <<============== << W E L C O M E   T O   G A M E >> ==============>>" << endl << endl << endl;
    
    cout << " 5. Siapakah penemu lampu pijar?" << endl;
    cout << "    a. Albert Einstein" << endl;
    cout << "    b. Thomas Alva Edison" << endl;
    cout << "    c. Meyze HadiShopia" << endl;
    char answer5;

    cout << endl;

    cout << "    Jawab: ";
    cin >> answer5;
    
    if (answer5 == 'b') {
        score += 20;
    }

    cout << "\033[2J\033[1;1H";

    // Menampilkan nilai akhir
    
    cout << endl;
    cout << "  = = = = = = = = = = >===== Keterangan =====<  = = = = = = = = = =" << endl << endl << endl;
    cout << "                    --------------------------" << endl;
    cout << "                         <<< Nilai mu: " << score << " >>>" << endl;
    cout << "  = = = = = = = = = = >=====oooooooooooo=====<  = = = = = = = = = =" << endl << endl;
    
    cout << "                    Mau bermain lagi ? (y/n) : ";
    cin >> ulang;
    
}while(ulang == "y"); 
    
     cout << endl;
     
    cout << "                  KETIK APA SAJA UNTUK KELUAR : ";
    cin >> lanjutkan; 
        
 
    
 
}



return 0;

}
