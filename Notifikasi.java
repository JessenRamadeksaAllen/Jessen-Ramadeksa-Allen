/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package sistemperpustakaan;

import java.time.LocalDate;
import java.util.Date;

/**
 *
 * @author ASUS
 */
public class Notifikasi {
    private int idNotif;
    private int noAnggota;
    private String pesan;
    private LocalDate timeStamp;
    private transaksiPeminjaman transaksi;

    public Notifikasi(int idNotif, int noAnggota, String pesan, LocalDate timeStamp, transaksiPeminjaman transaksi) {
        this.idNotif = idNotif;
        this.noAnggota = noAnggota;
        this.pesan = pesan;
        this.timeStamp = timeStamp;
        this.transaksi = transaksi;
    }

    Notifikasi(int idNotif, int noAnggota, String pesan, LocalDate timeStamp) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    public int getIdNotif() {
        return idNotif;
    }

    public void setIdNotif(int idNotif) {
        this.idNotif = idNotif;
    }

    public int getNoAnggota() {
        return noAnggota;
    }

    public void setNoAnggota(int noAnggota) {
        this.noAnggota = noAnggota;
    }

    public String getPesan() {
        return pesan;
    }

    public void setPesan(String pesan) {
        this.pesan = pesan;
    }


    public LocalDate getTimeStamp() {
        return timeStamp;
    }

    public void setTimeStamp(LocalDate timeStamp) {
        this.timeStamp = timeStamp;
    }

    public transaksiPeminjaman getTransaksi() {
        return transaksi;
    }

    public void setTransaksi(transaksiPeminjaman transaksi) {
        this.transaksi = transaksi;
    }

    
}
