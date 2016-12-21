create table NHACUNGCAP 
(	
	MaNhaCC nvarchar(10) not null primary key,
	TenNhaCC nvarchar(50) not null,
	DiaChi nvarchar(50) not null,
	SoDT nvarchar(20) not null,
	MaSoThue nvarchar(20) not null
)
create table LOAIDICHVU 
(	
	MaLoaiDV nvarchar(10) not null primary key,
	TenLoaiDV nvarchar(50) not null
)
create table DANGKYCUNGCAP 
(	
	MaDKCC nvarchar(10) not null primary key,
	MaNhaCC nvarchar(10) not null,
	MaLoaiDV nvarchar(10) not null,
	DongXe nvarchar(20) not null,
	MaMP nvarchar(10) not null,
	NgayBatDauCungCap date not null,
	NgayKetThucCungCap date not null,
	SoLuongXeDangKy int not null
)	 
create table MUCPHI 
(	
	MaMP nvarchar(10) not null primary key,
	DonGia float not null,
	MoTa nvarchar(50) not null
)
create table DONGXE 
(	
	DongXe nvarchar(20) not null primary key,
	HangXe nvarchar(10) not null,
	SoChoNgoi int not null
)
insert into NHACUNGCAP values ('NCC001',N'Cty TNHH Toàn Phát','Hai Chau','0511399888','568941')
insert into NHACUNGCAP values ('NCC002',N'Cty Cổ Phần Đông Du','Lien Chieu','0511399889','456789')
insert into NHACUNGCAP values ('NCC003',N'Ông Nguyễn Văn A','Hoa Thuan','0511399890','321456')
insert into NHACUNGCAP values ('NCC004',N'Cty Cổ Phần Toàn Cầu Xanh','Hai Chau','05113658945','513364')
insert into NHACUNGCAP values ('NCC005',N'Cty TNHH AMA','Thanh Khe','05113875466','546546')
insert into NHACUNGCAP values ('NCC006',N'Bà Trần Thị Bích Vân','Lien Chieu','05113587469','524545')
insert into NHACUNGCAP values ('NCC007',N'Cty TNHH Phan Thành','Thanh Khe','05113987456','113021')
insert into NHACUNGCAP values ('NCC008',N'Ông Phan Đình Nam','Hoa Thuan','05113532456','121230')
insert into NHACUNGCAP values ('NCC009',N'Tập Đoàn Đông Nam Á','Lien Chieu','05113987121','533654')
insert into NHACUNGCAP values ('NCC010',N'Cty Cổ Phần Rạng Đông','Lien Chieu','05113569654','187864')

insert into LOAIDICHVU values ('DV01',N'Dịch vụ xe Taxi')
insert into LOAIDICHVU values ('DV02',N'Dịch vụ xe buýt theo tuyến cố định')
insert into LOAIDICHVU values ('DV03',N'Dịch vụ xe cho thuê theo hợp đồng')

insert into MUCPHI values ('MP01',10000,N'Áp dụng từ 1/2015')
insert into MUCPHI values ('MP02',15000,N'Áp dụng từ 2/2015')
insert into MUCPHI values ('MP03',20000,N'Áp dụng từ 1/2010')
insert into MUCPHI values ('MP04',25000,N'Áp dụng từ 2/2011')

insert into DONGXE values ('Hiace','Toyota',16)
insert into DONGXE values ('Vios','Toyota',5)
insert into DONGXE values ('Escape','Ford',5)
insert into DONGXE values ('Cerato','KIA',7)
insert into DONGXE values ('Forte','KIA',5)
insert into DONGXE values ('Starex','Huyndai',7)
insert into DONGXE values ('Grand-i10','Huyndai',7)

insert into DANGKYCUNGCAP values ('DK001','NCC001','DV01','Hiace','MP01','11-20-2015','11-20-2016',4)
insert into DANGKYCUNGCAP values ('DK002','NCC002','DV02','Vios','MP02','11-20-2015','11-20-2017',3)
insert into DANGKYCUNGCAP values ('DK003','NCC003','DV03','Escape','MP03','11-20-2017','11-20-2018',5)
insert into DANGKYCUNGCAP values ('DK004','NCC005','DV01','Cerato','MP04','11-20-2015','11-20-2019',7)
insert into DANGKYCUNGCAP values ('DK005','NCC002','DV02','Forte','MP03','11-20-2019','11-20-2020',1)
insert into DANGKYCUNGCAP values ('DK006','NCC004','DV03','Starex','MP04','11-10-2016','11-20-2021',2)
insert into DANGKYCUNGCAP values ('DK007','NCC005','DV01','Cerato','MP03','11-30-2015','1-25-2016',8)
insert into DANGKYCUNGCAP values ('DK008','NCC006','DV01','Vios','MP02','2-28-2016','8-15-2016',9)
insert into DANGKYCUNGCAP values ('DK009','NCC005','DV03','Grand-i10','MP02','4-27-2016','4-30-2017',10)
insert into DANGKYCUNGCAP values ('DK010','NCC006','DV01','Forte','MP02','11-21-2015','2-22-2016',4)
insert into DANGKYCUNGCAP values ('DK011','NCC007','DV01','Forte','MP01','12-25-2016','2-20-2017',5)
insert into DANGKYCUNGCAP values ('DK012','NCC007','DV03','Cerato','MP01','4-14-2016','12-20-2017',6)
insert into DANGKYCUNGCAP values ('DK013','NCC003','DV02','Cerato','MP01','12-21-2015','12-21-2016',8)
insert into DANGKYCUNGCAP values ('DK014','NCC008','DV02','Cerato','MP01','5-20-2016','12-30-2016',1)
insert into DANGKYCUNGCAP values ('DK015','NCC003','DV01','Hiace','MP02','4-24-2018','11-20-2019',6)
insert into DANGKYCUNGCAP values ('DK016','NCC001','DV03','Grand-i10','MP02','06-22-2016','12-22-2016',8)
insert into DANGKYCUNGCAP values ('DK017','NCC002','DV03','Cerato','MP03','9-30-2016','9-30-2019',4)
insert into DANGKYCUNGCAP values ('DK018','NCC008','DV03','Escape','MP04','12-13-2017','9-30-2018',2)
insert into DANGKYCUNGCAP values ('DK019','NCC003','DV03','Escape','MP03','1-24-2016','12-30-2016',8)
insert into DANGKYCUNGCAP values ('DK020','NCC002','DV03','Cerato','MP04','5-3-2016','10-21-2017',7)
insert into DANGKYCUNGCAP values ('DK021','NCC006','DV01','Forte','MP02','1-30-2015','12-30-2016',9)
insert into DANGKYCUNGCAP values ('DK022','NCC002','DV02','Cerato','MP04','7-25-2016','12-30-2017',6)
insert into DANGKYCUNGCAP values ('DK023','NCC002','DV01','Forte','MP03','11-30-2017','5-20-2018',5)
insert into DANGKYCUNGCAP values ('DK024','NCC003','DV03','Forte','MP04','12-23-2017','11-30-2019',8)
insert into DANGKYCUNGCAP values ('DK025','NCC003','DV03','Hiace','MP02','8-24-2016','10-25-2017',1)

Câu 3:
Select DongXe from DONGXE where SoChoNgoi >5

Cau 4:
Select * from NHACUNGCAP where NHACUNGCAP.MaNhaCC in( select MaNhaCC from DANGKYCUNGCAP where MaMP ='MP02' and DongXe in( select DongXe from DONGXE where HangXe='Toyota'))

Cau 5:
Select * from DONGXE where HangXe like 'T_____'

Cau 6:
Select * from NHACUNGCAP
Order by TenNhaCC, MaSoThue DESC

Cau 7: Deo Hieu de`
Select MaNhaCC from DANGKYCUNGCAP where NgayBatDauCungCap='11-20-2015'

Cau 8:
Select DIStinct HangXe from DONGXE

Cau 9:
Select MaDKCC,TenLoaiDV,TenNhaCC,DonGia,DONGXE.DongXe,HangXe,NgayBatDauCungCap,NgayKetThucCungCap,SoLuongXeDangKy
from DANGKYCUNGCAP join DONGXE on DANGKYCUNGCAP.DongXe=DONGXE.DongXe 
join LOAIDICHVU on LOAIDICHVU.MaLoaiDV=DANGKYCUNGCAP.MaLoaiDV 
join NHACUNGCAP on NHACUNGCAP.MaNhaCC=DANGKYCUNGCAP.MaNhaCC 
join MUCPHI on DANGKYCUNGCAP.MaMP=MUCPHI.MaMP

Cau 10:
Select MaDKCC,TenLoaiDV,TenNhaCC,DonGia,DONGXE.DongXe,HangXe,NgayBatDauCungCap,NgayKetThucCungCap,SoLuongXeDangKy
from DANGKYCUNGCAP right join NHACUNGCAP on NHACUNGCAP.MaNhaCC=DANGKYCUNGCAP.MaNhaCC
 left join DONGXE on DANGKYCUNGCAP.DongXe=DONGXE.DongXe 
 left join LOAIDICHVU on LOAIDICHVU.MaLoaiDV=DANGKYCUNGCAP.MaLoaiDV 
 left join MUCPHI on DANGKYCUNGCAP.MaMP=MUCPHI.MaMP

Cau 11:
Select * from NHACUNGCAP where MaNhaCC in( select MaNhaCC from DANGKYCUNGCAP where DongXe='Hiace')

Cau 12:
Select * from NHACUNGCAP where MaNhaCC  NOT IN( select MaNhaCC from DANGKYCUNGCAP)

Cau 13:
Select * from NHACUNGCAP where Not exists( select  MaNhaCC from DANGKYCUNGCAP where DongXe='Cerato' and DANGKYCUNGCAP.MaNhaCC=NHACUNGCAP.MaNhaCC) and MaNhaCC in( select MaNhaCC from DANGKYCUNGCAP where DongXe='Hiace')

Cau 14:
Select * from DONGXE where DongXe in( select DongXe from DANGKYCUNGCAP where Year(NgayBatDauCungCap)='2016') and not exists (select DongXe from DANGKYCUNGCAP where Year(NgayBatDauCungCap) ='2015' and DANGKYCUNGCAP.DongXe=DONGXE.DongXe)

Cau 15:
Select * from DONGXE where DongXe in(Select DongXe from DANGKYCUNGCAP where Year(NgayBatDauCungCap) between 2016 and 2019 and SoLuongXeDangKy=(select MAX(SoLuongXeDangKy) from DANGKYCUNGCAP))

Cau 16:
Select DongXe,sum(SoLuongXeDangKy) as 'TongSLxeDK' from DANGKYCUNGCAP where MaMP='MP03'
group by DongXe

cau 17: chua dung
Select MaNhaCC,SoLuongXeDangKy from DANGKYCUNGCAP
where MaNhaCC in( select MaNhaCC from NHACUNGCAP where DiaChi='Hai Chau')
group by MaNhaCC,SoLuongXeDangKy
having count(DANGKYCUNGCAP.MaNhaCC) = 1
order by SoLuongXeDangKy

Cau 18:
Update DANGKYCUNGCAP
set SoLuongXeDangKy = 20 
where  NgayKetThucCungCap<'12-30-2016' and DongXe in(select DONGXE from DONGXE where HangXe='Toyota') 

Cau 19:
update MUCPHI
set MoTa=N'Được sử dụng nhiều'
where MaMP in(select MaMP from DANGKYCUNGCAP group by MaMP having count(MaMP)>=5)

Cau 20:
DELETE from DANGKYCUNGCAP where DongXe='Vios' and NgayBatDauCungCap>'11-10-2015'