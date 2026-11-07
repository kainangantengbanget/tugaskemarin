
let nilai = [60, 85, 40, 90, 75, 50, 95];

// 1. Mencari nilai 85
let cari = nilai.indexOf(85);

if (cari !== -1) {
    console.log("Nilai 85 ditemukan pada index ke-" + cari);
} else {
    console.log("Nilai 85 tidak ditemukan");
}

// 2. Menyaring nilai yang lulus
let lulus = nilai.filter(function(n) {
    return n >= 75;
});

// Menampilkan nilai yang lulus
console.log("Daftar nilai yang lulus:");
console.log(lulus);
