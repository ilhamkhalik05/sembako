# Sembako

Program simulasi toko sembako sederhana. Mengambil peran sebagai kasir dari toko sembako. Program ini dibuat menggunakan bahasa C.

---

## Untuk Kontributor (Step by Step Kontribusi)

Pastikan git sudah terinstall di komputer Anda.
Jalankan perintah-perintah berikut menggunakan terminal.

## 1. Clone Repository

```bash
git clone https://github.com/ilhamkhalik05/sembako.git
cd sembako
```

## 2. Pindah ke branch dev dan sinkronisasi

```bash
git checkout dev
git pull origin dev
```

## 3. Buat dan pindah ke branch baru

```bash
git checkout -b <nama-branch>
```

Contoh nama branch:

- feature/tambah-produk
- fix/bug-input
- docs/dokumentasi-modul-produk

## 4. Mulai berkontribusi

Mulailah dengan membuat fitur, memperbaiki bug, menambah dokumentasi,
atau melakukan refactor.
Buat perubahan pada file yang relevan seperti `main.c`.

## 5. Simpan dan cek perubahan

```bash
git status
```

## 6. Tambahkan file ke staging area

```bash
git add <nama-file>
# atau untuk semua file
git add .
```

## 7. Buat commit dengan message sesuai

Prefix commit opsional namun direkomendasikan:

- feat : fitur baru
- fix : bug fixing
- refactor : perombakan kode
- docs : dokumentasi

```bash
git commit -m "<prefix>: <custom-message>"
# atau tanpa prefix
git commit -m "<custom-message>"
```

## 8. Ambil update terbaru dari dev (sinkronisasi ulang)

```bash
git checkout dev
git pull origin dev

git checkout <nama-branch>
git rebase dev
```

Jika muncul konflik, selesaikan di editor lalu:

```bash
git add .
git rebase --continue
```

## 9. Push branch ke repository

```bash
git push origin <nama-branch>
```

## 10. Buat pull request (PR) di GitHub

- Buka repo: https://github.com/ilhamkhalik05/sembako
- Pilih **Pull requests**
- Klik **New pull request**
- Pastikan:
  - Base branch: `dev`
  - Compare branch: `<nama-branch>`
- Isi judul PR, deskripsi, dan langkah pengetesan
- Klik **Create pull request**

## 11. Review & revisi

Jika diberi komentar oleh maintainer:

```bash
git add .
git commit -m "fix: revisi setelah review"
git push origin <nama-branch>
```

## 12. Merge

PR akan di-merge oleh maintainer jika sudah memenuhi kriteria.

## 13. Hapus branch setelah merge

```bash
git branch -d <nama-branch>
git push origin --delete <nama-branch>
```

---

## Cara Menjalankan Program

Ikuti langkah berikut untuk meng-clone repository dan menjalankan
program.

### Clone Repository

```bash
git clone https://github.com/ilhamkhalik05/sembako.git
cd sembako
```

### Compile Program

```bash
gcc src/main.c -o app.o
```

### Run Program

```bash
./app.o
```

---

## Feature List

- [ ] Menampilkan daftar produk
- [ ] Menambah produk baru
- [ ] Menghapus data produk
- [ ] Filtering produk berdasarkan kategori
- [ ] Sorting produk berdasarkan harga
- [ ] Simulasi transaksi dengan cart dan checkout
- [ ] History transaksi

---

## Credit to Creator

Project ini dibuat oleh:

- [Ilham Khalik](https://github.com/ilhamkhalik05)
- Izhar Hilko
- Farel Gerardo Purba
