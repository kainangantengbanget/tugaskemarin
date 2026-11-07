
let produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"];

// 1. Mencari produk Keyboard
if (produk.includes("Keyboard")) {
    console.log("Keyboard ditemukan");
} else {
    console.log("Keyboard tidak ditemukan");
}

// 2. Filter nama produk lebih dari 5 karakter
let hasil = produk.filter(function(x) {
    return x.length > 5;
});

console.log("Produk dengan lebih dari 5 karakter:");
console.log(hasil);
