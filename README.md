# Sistem Seleksi Beasiswa Kampus

## Deskripsi

Proyek ini dibuat sebagai implementasi materi **Logika Informatika** menggunakan bahasa **C++**.

Program digunakan untuk membantu proses seleksi awal penerima beasiswa berdasarkan aturan yang telah ditentukan oleh pihak kampus. Sistem akan mengevaluasi data mahasiswa dan menentukan status kelayakan secara otomatis.

---

## Latar Belakang

Proses seleksi beasiswa sering dilakukan secara manual dengan memeriksa data mahasiswa satu per satu. Cara ini membutuhkan waktu yang lama dan berpotensi menimbulkan kesalahan.

Melalui program ini, proses seleksi dapat dilakukan secara lebih cepat, konsisten, dan sesuai dengan aturan yang berlaku.

---

## Studi Kasus

### Stakeholder

Wakil Dekan Bidang Kemahasiswaan

### Permasalahan

Setiap semester terdapat ratusan mahasiswa yang mendaftar beasiswa. Staf akademik harus memeriksa kelayakan masing-masing mahasiswa secara manual.

### Solusi

Membuat sistem sederhana yang dapat menentukan apakah mahasiswa **Layak** atau **Tidak Layak** menerima beasiswa berdasarkan aturan yang telah ditentukan.

---

## Aturan Bisnis

Mahasiswa dinyatakan **LAYAK** jika memenuhi salah satu kondisi berikut:

### Kondisi 1

* IPK ≥ 3.50
* Penghasilan Orang Tua < Rp5.000.000

Logika:

(IPK >= 3.50) AND (Penghasilan < 5000000)

### Kondisi 2

* Memiliki prestasi Juara Nasional

Logika:

Juara Nasional = TRUE

### Bentuk Logika Lengkap

((IPK >= 3.50) AND (Penghasilan < 5000000)) OR (Juara Nasional)

---

## Input

Program menerima data:

* Nama Mahasiswa
* IPK
* Penghasilan Orang Tua
* Status Juara Nasional

---

## Output

Program menampilkan:

* Nama Mahasiswa
* IPK
* Penghasilan Orang Tua
* Status Juara Nasional
* Hasil Seleksi (Layak / Tidak Layak)

---

## Materi yang Dipelajari

* Variabel
* Input dan Output
* Tipe Data
* Operator Relasional
* Operator Logika
* AND (&&)
* OR (||)
* If Else
* Truth Table
* Requirement Analysis

---

## Contoh Penggunaan

Input:

Nama: Hen
IPK: 3.75
Penghasilan: 4500000
Juara Nasional: 0

Output:

===== HASIL SELEKSI =====

Nama : Hen
IPK : 3.75
Penghasilan Orang Tua : 4500000
Juara Nasional : Tidak
Hasil Seleksi : Layak

---

## Struktur Logika

A = IPK >= 3.50

B = Penghasilan < 5000000

C = Juara Nasional

Rumus:

(A AND B) OR C

---

## Pengembangan Selanjutnya

* Validasi input IPK
* Validasi penghasilan tidak boleh negatif
* Input banyak mahasiswa
* Statistik jumlah mahasiswa layak dan tidak layak
* Penyimpanan data ke file
* Integrasi database

---

## Teknologi

* C++
* Visual Studio Code
* MinGW-w64
* Git
* GitHub

---

## Author

Hen

Proyek pembelajaran semester 1 – Logika Informatika.
