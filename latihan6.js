
let suhu = [-3, 5, 0, -12, 8, 15, -1, 22];

// 1. Mencari nilai 0
if (suhu.includes(0)) {
    console.log("Nilai 0 ditemukan");
} else {
    console.log("Nilai 0 tidak ditemukan");
}

// 2. Filter suhu positif
let hasil = suhu.filter(function(x) {
    return x > 0;
});

console.log("Suhu positif:");
console.log(hasil);
