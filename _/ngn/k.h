// ngn/k, (c) 2019-2020 ngn, GNU AGPLv3 - http://bitbucket.org/ngn/k/raw/master/LICENSE
//#define DEBUG
//g.h
#define xb Ab(x)
#define xt At(x)
#define xn An(x)
#define yb Ab(y)
#define yt At(y)
#define yn An(y)
#define zb Ab(z)
#define zt At(z)
#define zn An(z)
#define ub Ab(u)
#define ut At(u)
#define un An(u)
#define xR mR(x)
#define xr mr(x)
#define yR mR(y)
#define yr mr(y)
#define zR mR(z)
#define zr mr(z)
#define uR mR(u)
#define ur mr(u)
#define xci xc[i]
#define xcj xc[j]
#define xhi xh[i]
#define xhj xh[j]
#define xii xi[i]
#define xij xi[j]
#define xli xl[i]
#define xlj xl[j]
#define xdi xd[i]
#define xdj xd[j]
#define xai xa[i]
#define xaj xa[j]
#define yci yc[i]
#define ycj yc[j]
#define yhi yh[i]
#define yhj yh[j]
#define yii yi[i]
#define yij yi[j]
#define yli yl[i]
#define ylj yl[j]
#define ydi yd[i]
#define ydj yd[j]
#define yai ya[i]
#define yaj ya[j]
#define zci zc[i]
#define zcj zc[j]
#define zhi zh[i]
#define zhj zh[j]
#define zii zi[i]
#define zij zi[j]
#define zli zl[i]
#define zlj zl[j]
#define zdi zd[i]
#define zdj zd[j]
#define zai za[i]
#define zaj za[j]
#define uci uc[i]
#define ucj uc[j]
#define uhi uh[i]
#define uhj uh[j]
#define uii ui[i]
#define uij ui[j]
#define uli ul[i]
#define ulj ul[j]
#define udi ud[i]
#define udj ud[j]
#define uai ua[i]
#define uaj ua[j]
#define xc C(x)
#define xh H(x)
#define xi I(x)
#define xl L(x)
#define xd D(x)
#define xa A(x)
#define yc C(y)
#define yh H(y)
#define yi I(y)
#define yl L(y)
#define yd D(y)
#define ya A(y)
#define zc C(z)
#define zh H(z)
#define zi I(z)
#define zl L(z)
#define zd D(z)
#define za A(z)
#define uc C(u)
#define uh H(u)
#define ui I(u)
#define ul L(u)
#define ud D(u)
#define ua A(u)
#define xx xa[0]
#define xy xa[1]
#define xz xa[2]
#define yx ya[0]
#define yy ya[1]
#define yz ya[2]
#define zx za[0]
#define zy za[1]
#define zz za[2]
#define ux ua[0]
#define uy ua[1]
#define uz ua[2]
#define xtX (xt==tX)
#define xtC (xt==tC)
#define xtI (xt==tI)
#define xtL (xt==tL)
#define xtD (xt==tD)
#define xtS (xt==tS)
#define xtA (xt==tA)
#define xta (xt==ta)
#define xtc (xt==tc)
#define xti (xt==ti)
#define xtl (xt==tl)
#define xtd (xt==td)
#define xts (xt==ts)
#define xto (xt==to)
#define xtp (xt==tp)
#define xtq (xt==tq)
#define xtr (xt==tr)
#define xtu (xt==tu)
#define xtv (xt==tv)
#define xtw (xt==tw)
#define ytX (yt==tX)
#define ytC (yt==tC)
#define ytI (yt==tI)
#define ytL (yt==tL)
#define ytD (yt==tD)
#define ytS (yt==tS)
#define ytA (yt==tA)
#define yta (yt==ta)
#define ytc (yt==tc)
#define yti (yt==ti)
#define ytl (yt==tl)
#define ytd (yt==td)
#define yts (yt==ts)
#define yto (yt==to)
#define ytp (yt==tp)
#define ytq (yt==tq)
#define ytr (yt==tr)
#define ytu (yt==tu)
#define ytv (yt==tv)
#define ytw (yt==tw)
#define ztX (zt==tX)
#define ztC (zt==tC)
#define ztI (zt==tI)
#define ztL (zt==tL)
#define ztD (zt==tD)
#define ztS (zt==tS)
#define ztA (zt==tA)
#define zta (zt==ta)
#define ztc (zt==tc)
#define zti (zt==ti)
#define ztl (zt==tl)
#define ztd (zt==td)
#define zts (zt==ts)
#define zto (zt==to)
#define ztp (zt==tp)
#define ztq (zt==tq)
#define ztr (zt==tr)
#define ztu (zt==tu)
#define ztv (zt==tv)
#define ztw (zt==tw)
#define utX (ut==tX)
#define utC (ut==tC)
#define utI (ut==tI)
#define utL (ut==tL)
#define utD (ut==tD)
#define utS (ut==tS)
#define utA (ut==tA)
#define uta (ut==ta)
#define utc (ut==tc)
#define uti (ut==ti)
#define utl (ut==tl)
#define utd (ut==td)
#define uts (ut==ts)
#define uto (ut==to)
#define utp (ut==tp)
#define utq (ut==tq)
#define utr (ut==tr)
#define utu (ut==tu)
#define utv (ut==tv)
#define utw (ut==tw)
#define xtcC (xtc||xtC)
#define xtiI (xti||xtI)
#define xtlL (xtl||xtL)
#define xtdD (xtd||xtD)
#define xtsS (xts||xtS)
#define xtaA (xta||xtA)
#define xtilIL (xtil||xtIL)
#define ytcC (ytc||ytC)
#define ytiI (yti||ytI)
#define ytlL (ytl||ytL)
#define ytdD (ytd||ytD)
#define ytsS (yts||ytS)
#define ytaA (yta||ytA)
#define ytilIL (ytil||ytIL)
#define ztcC (ztc||ztC)
#define ztiI (zti||ztI)
#define ztlL (ztl||ztL)
#define ztdD (ztd||ztD)
#define ztsS (zts||ztS)
#define ztaA (zta||ztA)
#define ztilIL (ztil||ztIL)
#define utcC (utc||utC)
#define utiI (uti||utI)
#define utlL (utl||utL)
#define utdD (utd||utD)
#define utsS (uts||utS)
#define utaA (uta||utA)
#define utilIL (util||utIL)
#define xtaAX (xtaA||xtX)
#define ytaAX (ytaA||ytX)
#define ztaAX (ztaA||ztX)
#define utaAX (utaA||utX)
#define xtil (xti||xtl)
#define ytil (yti||ytl)
#define ztil (zti||ztl)
#define util (uti||utl)
#define xtIL (xtI||xtL)
#define ytIL (ytI||ytL)
#define ztIL (ztI||ztL)
#define utIL (utI||utL)
#define xtt (xt>ta)
#define ytt (yt>ta)
#define ztt (zt>ta)
#define utt (ut>ta)
#define xtT (xt<tA)
#define ytT (yt<tA)
#define ztT (zt<tA)
#define utT (ut<tA)
#define Nx(r) N1(x,r)
#define Ny(r) N1(y,r)
#define Nz(r) N1(z,r)
#define Nu(r) N1(u,r)
#define     _(a...) {R({a;});}
#define   $(x,a...) if(x){a;}
#define   P(x,a...) $(x,_(a))
#define     E(a...) else{a;}
#define  E$(x,a...) else if(x){a;}
#define Y(x,y,a...) switch(x){default:{y;B;}a}
#define   Q(x,a...) case x:{a;B;}
#define   W(x,a...) while(x){a;}
#define   F(x,a...) for(L n_=(x),i=0;i<n_;i++){a;}
#define  Fj(x,a...) for(L n_=(x),j=0;j<n_;j++){a;}
#define B break
#define O const
#define R return
#define S static
#define NI __attribute__((noinline))
#define SI S inline
#define SN S NI
#define XT extern
#define TD typedef
#define UR __builtin_unreachable();
#define cold __attribute__((cold))
#define mstr(x) #x
#define xstr(x) mstr(x)
#define N(r)      ({A r_=(r);P(!r_,            0);r_;})
#define N1(x,r)   ({A r_=(r);P(!r_,mr(x);      0);r_;})
#define N2(x,y,r) ({A r_=(r);P(!r_,mr(x);mr(y);0);r_;})
#define swp(x,y) {__typeof__(x)tmp=x;x=y;y=tmp;}
#ifdef DEBUG
 #define dbg(x) x
 #define die(x) {write(1,x,sizeof(x));exit(1);}
 #define asrt(x) $(!(x),die(__FILE__":"xstr(__LINE__)": "xstr(x)))
#else
 #define dbg(x)
 #ifdef __clang__
  #define asrt(x) __builtin_assume(x)
 #else
  #define asrt(x)
 #endif
#endif

TD char C;TD unsigned char UC;TD short H;TD unsigned short UH;TD int I;TD unsigned int UI;TD long long L;TD unsigned long long UL;TD double D;
TD void V;TD L A;TD A A0(),A1(A),A2(A,A),A3(A,A,A),AA(O A*,I),AX(A,O A*,I);
#define V(x) ((V*)((UL)(x)<<16>>16))
#define C(x) ((C*)V(x))
#define H(x) ((H*)V(x))
#define I(x) ((I*)V(x))
#define L(x) ((L*)V(x))
#define D(x) ((D*)V(x))
#define A(x) ((A*)V(x))
#define A_(a...) (A[]){a}
#define A0(f,b...) A f()             _(b)
#define A1(f,b...) A f(A x)          _(b)
#define A2(f,b...) A f(A x,A y)      _(b)
#define A3(f,b...) A f(A x,A y,A z)  _(b)
#define AA(f,b...) A f(O A*a,I n)    _(b)
#define AX(f,b...) A f(A x,O A*a,I n)_(b)

/*
#define sc(f,a...  ) ({L r;asm volatile("syscall":"=a"(r):"0"(SYS_##f)a:"cc","rcx","r11","memory");r;})
#define sc1(f,x    ) sc(f,,"D"(x)              )
#define sc2(f,x,y  ) sc(f,,"D"(x),"S"(y)       )
#define sc3(f,x,y,z) sc(f,,"D"(x),"S"(y),"d"(z))
#define   read(a...) sc3(        read,a)
#define  write(a...) sc3(       write,a)
#define   open(a...) sc3(        open,a)
#define  close(a...) sc1(       close,a)
#define  fstat(a...) sc2(       fstat,a)
#define   dup2(a...) sc2(        dup2,a)
#define execve(a...) sc3(      execve,a)
#define  pipe2(a...) sc2(       pipe2,a)
#define munmap(a...) sc2(      munmap,a)
#define    skt(a...) sc3(      socket,a)
#define   conn(a...) sc3(     connect,a)
#define   gtod(a...) sc2(gettimeofday,a)
#define   exit(a...){sc1(        exit,a);UR;}
#define fork() sc(fork)
#define mmap_(x,y,z,t,u,v) ({register L r10 asm("r10")=t,r8 asm("r8")=u,r9 asm("r9")=v;(V*)sc(mmap,,"D"(x),"S"(y),"d"(z),"r"(r10),"r"(r8),"r"(r9));})
*/
#define mmap_ mmap

#define extr(x,y,c)({__typeof__(x) x1=(x),y1=(y);x1 c y1?x1:y1;})
#define min(x,y)extr(x,y,<)
#define max(x,y)extr(x,y,>)
SI L d2l(D v)_(*(L*)(V*)&v)/*SI L llabs(L x)_(x<0?-x:x) (stdlib)*/SI I C3(UC x,UC y,UC z)_(x<=y&&y<=z)
SI D l2d(L v)_(*(D*)(V*)&v)SI C hex(I x)_(x+(x>9?'a'-10:'0'))SI I dgt(C c)_(C3('0',c,'9'))

//   () "" ,0 ,l ,d ,` +!  ! "a" 0 0j 0. `  {} 1+ ++ +/ +: +  /
enum{tX,tC,tI,tL,tD,tS,tA,ta,tc,ti,tl,td,ts,to,tp,tq,tr,tu,tv,tw,tn};
#define tsym "XCILDSAacildsopqruvw"
//tttttttt........xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000 tX,tC,tI,tL,tD,tS,tA,ta,tl,td
//tttttttt................................................cccccccc tc
//tttttttt........................iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii ti
//tttttttt........oooooooooooooooossssssssssssssssssssssssssssssss ts
//tttttttt.....kkkxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000 to,tp,tq
//tttttttt..vvvkkkxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx0000 tr
//ttttttttvvvvvkkk................................................ tu,tv,tw
//t:type,v:verb,k:arity,o:offset,x:ptr,cils:value
SI UC At(A x)_((UL)x>>56   )SI A AT(UC t,A x)_((A)((UL)t<<56|(UL)x<<8>>8))
SI I reft(UC t)_(t==tX||t==ta||t==tA||t==to||t==tp||t==tq||t==tr)SI I ref(A x)_(reft(xt))SI I pkd(A x)_(xtc||xti||xts||xtu||xtv||xtw)
SI I sim(A x)_(ta<xt&&xt<to)SI I fun(A x)_(to<=xt)SI UC t_lst(UC t)_(t==ta?tA:t>=to?tX:t>=tc?t+tC-tc:t)
SI UC Ak(A x)_((UL)x>>48&7 )SI A AK(UC k,A x)_(asrt(k< 8);asrt(xt<tu||tw<xt);(A)(((UL)x&~( 7ull<<48))|(UL)k<<48))
SI UC Av(A x)_((UL)x>>51&31)SI A AV(UC v,A x)_(asrt(v<32);asrt(xt<tu||tw<xt);(A)(((UL)x&~(31ull<<51))|(UL)v<<51))
SI UC Ab(A x)_(C(x)[-16]   )SI A AB(UC b,A x)_(C(x)[-16]=b;x) //hdr: b.oorrrrnnnnnnnn
SI UL An(A x)_(L(x)[-1 ]   )SI A AN(UL n,A x)_(asrt(n<1ull<<48);L(x)[-1 ]=n;x)
SI UH Ao(A x)_(xts?(UL)x>>32:pkd(x)?0:xh[-7])SI A AO(UH o,A x)_(P(xts,(A)(((UL)x&~(0xffffull<<32)|(UL)o<<32)))H(x)[-7]=o;x)
#define Ar(x) I(x)[-3]

#define Z sizeof
#define ZZ(x) (Z(x)/Z(*(x)))
#define ZV Z(V*)
#define ZA 16
#define ZR 67 //ref
SI UC tz(UC t)_(t==tC?0:t==tI||t==tS?2:reft(t)?ZR:3)
SI UC tZ(UC t)_(t==tC?1:t==tI||t==tS?4:reft(t)?ZV:8)

A1 a1,asc,ax,blw,cmd,cpl,dsc,enl,enla,fir,flp,flr,frk,gD,gI,gL,gS,grp,hcl,hop,json,kst,las,ldf,len,mr,mRa,mut,neg,not,nul,out,prs,rev,sqr,sqz,
   str,str0,til,typ,u0c,u1c,unq,val,whr;
A2 a2,aa,aA,add,ap1,ap2,apd,cat,com,cst,cut,dex,dvd,eql,fnd,id_,gtn,idx,ltn,mnm,mod,mtc,mul,mxm,rsh,sub,v0c,v1c,xpt;
A0 aa0;A3 a3,try;AA amd,am1,dmd,dm1;AX eac,rdc,scn,eap,ear,eal,app,prj,run;XT A syml,glb;XT L mu;
A err0(O C*),err1(O C*,A),err2(O C*,A,A),err3(O C*,A,A,A),errn(O C*,I,O A*),ea1(A1,A),apv(A,O V*),apc(A,C),catc(A,O C*,L),room(A,L),
  get(A,L),getr(A,L),atn(UC,L),atnv(UC,L,O V*),aCn(O C*,L),aCm(O C*,O C*),aCz(O C*),gkv(A*),pS(C**);
V mrn(L,O A*),*mc(V*,O V*,L),mz(V*,L);
I Ci(O C*,C),epr(),eso(A,L),memcmp(O V*,O V*,L),mtc_(A,A),sym(A);
L strlen(O C*),len_(A),fndl(A,L),fndi(A,I),fpc(A*,C),fpi(A*,I),fpl(A*,L),fpa(A*,A),tru(A),time(),pl(C**),slc_(A,L,L),pu(C**);

SI A1(mR,asrt(x);P(pkd(x),x)asrt(Ar(x)>=0);Ar(x)++;x)SI A symstr(I i)_(A(syml)[i])SI C*symptr(I i)_(C(symstr(i)))
#define atv(t,v) ({A r_=atn((t),1);*(typeof(v)*)V(r_)=(v);r_;})
SI A aX(L n)_(atn(tX,n))SI A pck(UL t,UI v)_(t<<56|v)SI A0(a0,aX(0))
SI A aC(L n)_(atn(tC,n))SI A ac(UC v)_(pck(tc,v))SI UC gc(A x)_(asrt(xtc);(UC)x)
SI A aS(L n)_(atn(tS,n))SI A as(I v)_(pck(ts,v))SI I gs(A x)_(asrt(xts);(I)x)
SI A aI(L n)_(atn(tI,n))SI A ai(I v)_(pck(ti,v))SI I gi(A x)_(asrt(xti||xts);(I)x)
SI A aL(L n)_(atn(tL,n))SI A al(L v)_(atv(tl,v))SI L gl(A x)_(!pkd(x)?xr,*xl:(I)x)SI L gl_(A x)_(pkd(x)?(I)x:*xl)
SI A aD(L n)_(atn(tD,n))SI A ad(D v)_(atv(td,v))SI D gd(A x)_(D v=*xd;xr;v)SI D gd_(A x)_(*xd)

#define err_(x,y,z,u,n,...) n
#define err(a...) ({dbg(ps("["__FILE__":"xstr(__LINE__)"]"));err_(a,err3,err2,err1,err0)(a);})
#define en(a...) err((C*)0,##a)
#define el(a...) err((C*)1,##a)
#define et(a...) err((C*)2,##a)
#define ed(a...) err((C*)3,##a)
#define er(a...) err((C*)4,##a)
#define ei(a...) err((C*)5,##a)
#define ep(a...) err((C*)6,##a)
#define h(t,i) SI A e##t##n(I n,O A*a)_(errn((C*)i,n,a))
h(n,0)h(l,1)h(t,2)h(d,3)h(r,4)h(i,5)h(p,6)
#undef h

#define tvk(t,v,k) ((A)((UL)(t)<<56|(UL)(v)<<51|(UL)(k)<<48))
#define au(i) tvk(tu,i,1)
#define av(i) tvk(tv,i,2)
#define aw(i) tvk(tw,i,1)
#define vi(c) (c==':'?0:c=='+'?1:c=='-'?2:c=='*'?3:c=='%'?4:c=='!'?5:c=='&'?6:c=='|'?7:c=='<'?8:c=='>'?9:c=='='?10:c=='~'?11:c==','?12:\
 c=='^'?13:c=='#'?14:c=='_'?15:c=='$'?16:c=='?'?17:c=='@'?18:c=='.'?19:20+c-'0')
#define cu(c) au(vi(c))
#define cv(c) av(vi(c))
S O A au0=au(0),av0=av(0),au_out=au(28),au_cmd=au(29),av_com=av(27),av_mkl=av(28),av_plc=av(29);
#define _0N  (1ull<<63)
#define _0W  (~_0N)
#define _0Ni (1<<31)
#define _0Wi (~_0Ni)
#define _0n  (D)NAN
#define _0w  (D)INFINITY
#define K(s,a...) ({S A f;$(!f,L m=mu;f=val(aCn(s,Z(s)+1));mu=m);app(f,A_(a),Z(A_(a))/ZV);})
XT O C vc[];XT A cn[],ci[5][3];XT O V*vf[];SI I ari(A x)_(xtv&&Av(x)<11)

#define arI(f,n,p)Y(f,UR,Q(0,F(n,p ((V)a,b)))Q(1,F(n,p a+b))Q(2,F(n,p a-b))Q(3,F(n,p a*b))Q(4,F(n,p b?a/b:!a?_0Ni:a>0?_0Wi:-_0Wi))\
 Q(5,F(n,p a>0?(b%a+a)%a:a?b/-a:_0Ni))Q(6,F(n,p min(a,b)))Q(7,F(n,p max(a,b)))Q(8,F(n,p a<b))Q(9,F(n,p a>b))Q(10,F(n,p a==b)))
#define arL(f,n,p)Y(f,UR,Q(0,F(n,p ((V)a,b)))Q(1,F(n,p a+b))Q(2,F(n,p a-b))Q(3,F(n,p a*b))Q(4,F(n,p b?a/b:!a?_0N:a>0?_0W:-_0W))\
 Q(5,F(n,p a>0?(b%a+a)%a:a?b/-a:_0N))Q(6,F(n,p min(a,b)))Q(7,F(n,p max(a,b)))Q(8,F(n,p a<b))Q(9,F(n,p a>b))Q(10,F(n,p a==b)))
#define arD(f,n,p)Y(f,UR,Q(0,F(n,p ((V)a,b)))Q(1,F(n,p a+b))Q(2,F(n,p a-b))Q(3,F(n,p a*b))Q(4,F(n,p a/b))\
 Q(5,F(n,p((V)a,(V)b,_0n)))Q(6,F(n,p min(a,b)))Q(7,F(n,p max(a,b)))Q(8,F(n,p l2d(a<b)))Q(9,F(n,p l2d(a>b)))Q(10,F(n,p l2d(a==b))))

#define pv(x) pv_(#x":",(L)(x))
#define px(x) px_(#x":",(A)(x))
#define pp ps("["__FILE__":"xstr(__LINE__)"]");
#define nop {asm volatile("fnop");}
SI I ps(O C*x)_(write(2,x,strlen(x)))
SI I ph(L x)_(C s[17];s[16]=0;F(16,s[15-i]=hex(x&15);x>>=4)write(2,s,17))
SI I pd(L x)_(C b[32],*u=b+31;L m=x<0;$(m,x=-x)do{*u--='0'+x%10;x/=10;}while(x);$(m,*u--='-')write(2,u+1,b+31-u))
SI L pv_(C*s,L x)_(ps(s);write(2,"           ",max(1,10-strlen(s)));ph((L)x);write(2,"\n",1);x)
SI A px_(C*s,A x)_(ps(s);ph((L)x);P(!x,0)$(!pkd(x),ps(" b");pd(xb);ps("t");pd(xt);ps("r");pd(Ar(x));ps("n");pd(xn))ps(" ");out(x))
//a.c
A1(neg,sub(ai(0),x))A1(not,xtaAX?ea1(not,x):fun(x)?mtc(x,au0):eql(x,xtsS?as(0):ac(0)))
A1(sqr,P(xtaAX,ea1(sqr,x))x=gD(x);P(xtt,ad(__builtin_sqrt(gd(x))))A u=ax(x);F(xn,udi=__builtin_sqrt(xdi))u)
S C lwc(C c)_(c+32*C3('A',c,'Z'))S L fl1(D d)_(d<0?(L)d-(d<(L)d):(L)d)A1(nul,xtaAX?ea1(nul,x):eql(x,mR(cn[xt])))
A1(flr,P(xtlL||xtiI,x)P(xtc,ac(lwc(gc(x))))P(xtC,A u=ax(x);F(un,uci=lwc(xci))u)P(xtaAX,ea1(flr,x))
 x=N(gD(x));P(xtt,al(fl1(gd(x))))xr;A u=aL(xn);F(xn,uli=fl1(xdi))u)
S A pen2(A x,A y,I f)_(P(xta&&yta,A u=gkv(&y);am1(A_(x,y,av(f),u),4))P(xtaAX||ytaAX,eac(av(f),A_(x,y),2))
 I d=xtdD||ytdD,k=xtT<<1|ytT;
 A1*g=xtdD||ytdD?gD:xtlL||ytlL?gL:gI;x=Ny(g(x));y=Nx(g(y));
 P(k==0,P(xtdD,D a=gd(x),b=gd(y),r;arD(f,1,r=);f<8?ad(r):al(d2l(r)))
        P(xtlL,L a=gl(x),b=gl(y),r;arL(f,1,r=);al(r))
               I a=gi(x),b=gi(y),r;arI(f,1,r=);ai(r))
 xr;yr;P(k==3&&xn-yn,el())A u=atn(d&&f<8?tD:xtiI?tI:tL,k==2?xn:yn);
 P(xtdD,P(k==1,D a=gd_(x);arD(f,un,D b=ydi;udi=)u)P(k==2,D b=gd_(y);arD(f,un,D a=xdi;udi=)u)arD(f,un,D a=xdi;D b=ydi;udi=)u)
 P(xtlL,P(k==1,L a=gl_(x);arL(f,un,L b=yli;uli=)u)P(k==2,L b=gl_(y);arL(f,un,L a=xli;uli=)u)arL(f,un,L a=xli;L b=yli;uli=)u)
        P(k==1,I a=gi (x);arI(f,un,L b=yii;uii=)u)P(k==2,I b=gi (y);arI(f,un,I a=xii;uii=)u)arI(f,un,I a=xii;I b=yii;uii=)u)
S A1(s2l,xts?al(gs(x)):AT(tL,x))A2(eql,$(xtsS&&ytsS,x=s2l(x);y=s2l(y))pen2(x,y,vi('=')))
A2(mod,P(xtl,xtl&&*xl==_0N?xr,out(y):pen2(x,y,vi('!')))$(xtt||xta,$(xta,x=enl(x))x=rsh(al(len_(y)),x))
                                                       $(ytt||yta,$(yta,y=enl(y))y=rsh(al(len_(x)),y))len_(x)-len_(y)?el(x,y):aa(x,y))
#define h2(c,s) A2(s,pen2(x,y,vi(c)))
h2('+',add)h2('-',sub)h2('*',mul)h2('%',dvd)h2('&',mnm)h2('|',mxm)h2('<',ltn)h2('>',gtn)
//b.c
S O I mxl=16,mxc=128;enum{bu,bv=0x20,bs=0x40,bg=0x50,bd=0x60,bm=0x70,bM,bl,bL,ba,bP,bz,bj,bo,bp,br,bc=0x80,bC=0xff};S A f;S I lu[16],rhs(A);
#define fs A(f)[0] //src
#define fb A(f)[1] //bytecode
#define fm A(f)[2] //srcmap
#define fl A(f)[3] //local symbols
#define fc A(f)[4] //constants
#define h(b)({fb=apc(fb,(C)(b));fm=apc(fm,o);}) //add byte
#define hc(x)({I b=bc+fpa(&fc,x);P(b>bC,err("mxc"))h(b);}) //add a "load constant" instruction
S I lhs(A x/*0*/,A y/*0*/)_(UH o=Ao(x);P(yts&&xx==av0&&Ak(f),L i=fpi(&fl,gs(y));i<mxl?(lu[i]=An(fb)),h(bs|i),1:err("mxl"))
 P(ytS&&!Av(xx),hc(av0);hc(au0);hc(yR);hc(cv('.'));h(ba);h(4);1)
 P(yts||(ytX&&At(yx)==ts),$(yts,hc(a0()))E(F(yn-1,N(rhs(ya[yn-1-i])))h(bl);h(yn-1))
  A k=gs(yts?y:yx);L i=fndi(fl,k);$(i>=0,lu[i]=An(fb);h(bm);h(i))E(hc(as(k));h(bM))h(Av(xx));1)
 P(ytX&&yx==av_mkl,h(bL);h(yn-1);F(yn-1,N(lhs(x,ya[i+1]));h(bp))1)en();eso(mR(fs),o);0)
S I rhs(A x/*0*/)_(UH o=Ao(x);$(xts,P(gs(x)==4,h(bo);1)L i=fndi(fl,gs(x));P(i>=0,lu[i]=An(fb);h(bg|i);1))P(xtS&&xn==1,hc(as(*xl));1)
 P(xtsS,hc(xR);h(bu|vi('.'));1)P(!xtX,hc(x==av_plc?au0:xR);1)L n=xn;P(!n,hc(xR);1)A u=xx;P(utS&&n==1,hc(uR);1)
 P((utu||u==av0)&&n==3,N(rhs(xz));N(lhs(x,xy)))
 P(u==cv('$')&&n>3,UC d[n];A*a=&xy;n--;F(n&~1,N(rhs(a[i]));h(i&1?bj:bz);d[i]=An(fb);h(0))N(rhs(n&1?a[n-1]:au0));
                   A y=fb;F(n&~1,yc[d[i]]=(i&1?yn:d[i+1])-d[i])1)
 $(u==cu('*')&&n==2,A y=xy;P(ytX&&yn==2&&yx==cu('|'),N(rhs(yy));h(bu|27);1))$(utw&&n==2,A y=xy;P(!ytX&&!ytsS,yR;hc(app(u,&y,1));1))
 I p=0;F(n-1,A y=xa[n-1-i];y==av_plc?(p=1),hc(yR):N(rhs(y)))P(p,N(rhs(xx));h(bP);h(n-1);1)P(u==av0&&n==2,h(br);1)P(u==av_mkl,h(bl);h(n-1);1)
 P(utu&&n==2,h(bu|Av(u));1)P(utv&&n==3,h(bv|Av(u));1)N(rhs(xx));h(ba);h(n-1);1)
A1(cpl,UC k=Ak(x);f=x=mut(x);A y=fb;fb=fm=mR(aC(0));fc=a1(au0);C o=0;F(16,lu[i]=-1)F(yn,P(!rhs(yai),xr;yr;0)h(i==yn-1?br:bp))yr;
 y=fb;F(16,I j=lu[i];$(ycj==bg,asrt(Ar(y)==1);ycj=bd))AK(k,AT(to,x)))

S A sp0[0x10000],*sp=sp0+ZZ(sp0),*loc;S C*ip;
S A vm_(A f/*0*/)_(W(1,UC b=*ip++;$(b>=bc,*--sp=mR(A(fc)[b&(mxc-1)]))
 E$(b>=bm,$(b==bm,A*p=loc-*ip++;A y=*sp++;*sp=N(ap2(mR(*p=Ny(dm1(A_(*p,yR,av(*ip++),*sp),4))),y)))
         E$(b==bM,A x=*sp++;    A y=*sp++;*sp=N(ap2(      Ny(dmd(A_(x ,yR,av(*ip++),*sp),4)) ,y)))
         E$(b==bl,UC n=*ip++;A x=sqz(atnv(tX,n,sp));sp+=n-1;*sp=x)
         E$(b==bL,UC n=*ip++;A x=*sp;P(!xtt&&len_(x)-n,el())F(n,*--sp=get(x,n-1-i)))
         E$(b==ba||b==bP,L n=*ip++;A u=sp[n]=(b==ba?app:prj)(*sp,sp+1,n);mr(*sp);sp+=n;N(u))
         E$(b==bz,ip+=1+*ip*!tru(*sp++))E$(b==bj,ip+=*ip)E$(b==bo,*--sp=mR(loc[1]))E$(b==bp,mr(*sp++))E$(b==br,R*sp)E(UR))
 E$(b>=bs,A*p=loc-(b&(mxl-1));$(b>=bd,*--sp=*p;*p=au0)E$(b>=bg,*--sp=mR(*p))E(mr(*p);*p=mR(*sp)))
 E$(b>=bv,sp++;N(*sp=((A2*)vf[b])(sp[-1],*sp)))E(N(*sp=((A1*)vf[b])(*sp))))UR;0)
AX(run,asrt(xto);asrt(n==Ak(x));A f=xR;I m=An(fl);P(sp<sp0+m+3,errn("stk",n,a))*--sp=(A)(V*)ip;*--sp=(A)(V*)loc;*--sp=f;ip=C(fb);loc=sp-1;
 F(n,*--sp=a[i])F(m-n,*--sp=au0)A u=vm_(f);$(!u,eso(mR(fs),C(fm)[ip-1-C(fb)]);W(sp<loc-m,$(*sp,mr(*sp))sp++))
 asrt(sp==loc-m);A*p=loc+1;W(p>sp,mr(*p--))sp=loc+4;ip=(C*)sp[-1];loc=(V*)sp[-2];u)
//c.c
// L time()_(struct timeval t;gtod(&t,0);1000000ll*t.tv_sec+t.tv_usec)
S A1(cmdw,asrt(xtC);L n=mu;P(!xn,xr;al(n))A y=Nx(val(xR));mr(out(y));n=mu-n;xr;n?enl(cat(as(0),al(n))):au0)
S A1(cmdt,en(x))
//S A1(cmdt,asrt(xtC);C*s=xc;L n=*s==':'?++s,pl(&s):1;L t=time();x=N(cpl(N(prs(N(cut(al(s-xc),x))))));F(n,mr(Nx(app(x,0,0))))xr;al((time()-t+500)/1000))
A1(cmd,P(!xtC,et(x))$(!xn||xn==1&&*xc=='\\',exit(0))C c=*xc;
 $(C3('a',c,'z')&&(xn==1||xc[1]==32||xc[1]==':'),I i=0;W(i<xn&&xci-32&&xci-':',i++)I j=i;W(j<xn&&xcj==32,j++)x=N(cut(al(j),x));
  P(c=='l',ldf(x))P(c=='w',cmdw(x))P(c=='t',cmdt(x)))
 K("{0x0a\\`x(,\"/bin/sh\";x)}",x))
A1(frk,en(x))
/*
A1(frk,P(!xtX||xn-2,ed(x))A y=gkv(&x);P(!xtX||!ytC,ed(x,y))x=mut(x);C*a[xn+1];F(xn,A z=xai;$(!ztC,ed(x,y))a[i]=C(xai=str0(z))) //`x((exe;a1;a2;..);in)
 a[xn]=0;xr;yr;I p[4];pipe2(p,0);pipe2(p+2,0);P(!fork(),dup2(*p,0);dup2(p[3],1);F(4,close(p[i]))exit(execve(*a,a,0));0)close(*p);close(p[3]);
 write(p[1],yc,yn);close(p[1]);A u=aC(256-ZA);L m=0,k;W((k=read(p[2],uc+m,un-m))>0,m+=k;$(m+1000000>un&&2*m>un,A z=aC(2*un+ZA);mc(zc,uc,m);ur;u=z))
 close(p[2]);AN(m,u))
*/
//e.c
S C em[32];S UC en;S A es;S UH eo;S O C*eM[]={"nyi","len","typ","dom","rnk","idx","prs"};
cold A err0(O C*m)_($((UL)m<128,m=eM[(L)m])en=min(strlen(m),Z(em)-1);mc(em,m,en);em[en]=0;0)
cold A err1(O C*m,A x)_(xr;err0(m))cold A err2(O C*m,A x,A y)_(yr;err1(m,x))cold A err3(O C*m,A x,A y,A z)_(zr;err2(m,x,y))
cold A errn(O C*m,I n,O A*a)_(mrn(n,a);err0(m))cold S I ecl()_(en=0;$(es,mr(es);es=0)eo=0)cold I eso(A x/*1*/,L o)_($(!es,es=x;eo=o)0)
cold I epr()_(I h=64;C s0[3*h+Z(em)+6],*s=s0;*s++='\'';mc(s,em,en);s+=en;*s++=10;
 $(es,A x=es;C*t=xc+eo,*p=t,*q=t+1;W(p>xc&&p>t-h&&p[-1]&&p[-1]-10,p--)W(q<xc+xn&&q<=t+h&&*q&&*q-10,q++)
      mc(s,p,q-p);$(p<=t-h,*s=s[1]='.')$(q>t+h,s[q-p-2]=s[q-p-1]='.')s+=q-p;*s++=10;F(t-p,*s++=32)*s++='^';*s++=10)
 ecl();write(1,s0,s-s0);0)
A3(try,x=ap2(x,y);P(x,zr;x)$(fun(z),UC k=Ak(z);z=k==1?ap1(z,aCn(em,en)):k==2?ap2(z,a2(aCn(em,en),a2(es?mR(es):ac(0),al(eo)))):z)ecl();z)
//f.c
//prng: xoshiro256+ (public domain) http://vigna.di.unimi.it/xorshift/
//seeded with the central column of rule30, little-endian: 2/|+4 64#(n{(|(8#2)\30)@2/'3'0,x,0}\n=!2*n)@'n:256
S A rndn(L n,L m)_(S UL a=-3050759188708220101,b=1159352424775454479,c=-9080974122485750305,d=-388592090067015233;
 $(n==_0N,n=-m)A x=aL(llabs(n));F(n,xli=a+d;O UL t=b<<17;c^=a;d^=b;b^=c;a^=d;c^=t;d=d<<45|d>>19)$(m&(m-1),F(xn,xli=(UL)xli%m))E$(m,F(xn,xli&=m-1))
 $(n<0,n=-n;P(n>m,el(x))F(n,L k=m-n+i;L v=((UL*)xl)[i]%=k+1;Fj(i,$(xlj==v,xli=k;B)))A y=rndn(n,0);F(n,L j=(UL)yli%(i+1);swp(xli,xlj))yr)x)
S A2(rnd,L n=gl(x);P(ytl,rndn(n,gl(y)))P(ytc,C c=gc(y);P('a'-(32|c),ed())A z=rndn(n,26),u=aC(n);F(n,uci=c+zli)zr;u)P(ytT,idx(y,Ny(rndn(n,yn))))et(y))
S L fnda(A x,A y/*0*/)_(asrt(xtX); F(xn,P(mtc_(xai,y),i))_0N)L fpa(A*p,A v)_(A x=*p;L n=xn;F(n,P(mtc_(xai,v),mr(v),i))*p=apd(x,v);n)
S L fndc(A x,C v)_(asrt(tz(xt)==0);F(xn,P(xci==v,i))_0N)     L fpc(A*p,C v)_(A x=*p;L n=xn;F(n,P(xci==v,i))*p=apv(x,&v);n)
  L fndi(A x,I v)_(asrt(tz(xt)==2);F(xn,P(xii==v,i))_0N)     L fpi(A*p,I v)_(A x=*p;L n=xn;F(n,P(xii==v,i))*p=apv(x,&v);n)
  L fndl(A x,L v)_(asrt(tz(xt)==3);F(xn,P(xli==v,i))_0N)     L fpl(A*p,L v)_(A x=*p;L n=xn;F(n,P(xli==v,i))*p=apv(x,&v);n)
A2(fnd,P(xtt,P(xtl,rnd(x,y))P(xts,C*s=symptr(gs(x));*s=='j'&&!s[1]?json(y):ed(y))et(x,y))P(xta,A z=gkv(&x);idx(x,fnd(z,y)))P(xtA,en(x,y))
 P(ytt,fir(fnd(x,enl(y))))P(!xtX&&ytX,ear(cv('?'),A_(x,y),2))P(!xtX&&yt-xt,xr;rsh(len(y),mR(cn[tl])))
 A u=aL(yn);I w=tz(xt);P(ref(x),F(un,A z=get(y,i);uli=fnda(x,z);zr)xr;yr;u)
 P(w==0,F(un,uli=fndc(x,yci))xr;yr;u)P(w==2,F(un,uli=fndi(x,yii))xr;yr;u)P(w==3,F(un,uli=fndl(x,yli))xr;yr;u)en(x,y,u))
//h.c
A rsh_(A x/*0*/,L m,L*pj,L*s,L r)_(L n=llabs(*s);P(r>1,A y=aX(n);F(n,yai=rsh_(x,m,pj,s+1,r-1))y)
 UC t=t_lst(xt);$(t&&!xn,x=cn[t])L j=*s>=0?*pj:(m-n%m)%m,w=tZ(t),q=min(m-j,n);*pj=(j+n)%m;A y=atn(t,n);mc(yc,xc+j*w,q*w);mc(yc+q*w,xc,min(j,n-q)*w);
 W(2*m<=n,mc(yc+m*w,yc,m*w);m*=2)mc(yc+m*w,yc,(n-m)*w);$(t==tX,y=sqz(mRa(y)))y)
SN A2(flt,P(!ytT,er(x,y))A u=atn(yt,0);F(yn,A z=get(y,i);z=app(x,&z,1);$(!z,ur;u=0;B)z=gL(z);P(!z,xr;yr;ur;0)Fj(gl(z),u=apd(u,get(y,i))))xr;yr;u)
A2(rsh,P(fun(x),flt(x,y))P(yta&&!xtl,x=enla(x);xR;aa(x,ap1(y,x)))P(ytA,y=mut(y);yy=ear(cv('#'),A_(x,yy),2);y)
 y=!ytT?enl(y):!yn?enl(fir(y)):y;x=enla(Ny(gL(x)));P(!xn,xr;fir(y))
 F(xn,L v=xli;$(v<0,P(xn>2||xn==2&&v-_0N||xn==1&&v==_0N,ed(x,y))
                    P(xn==2,*xl<=0&&xl[1]<=0||!yn?ed(x,y):K("{n:1+(-m:|/x)!-1+l:#y;$[^*x;m*!n;0|l+n*!-m]_y}",x,y))))
 L j=0;A u=rsh_(y,yn,&j,xl,xn);xr;yr;u)
A1(enl,P(sim(x),atv(t_lst(xt),gl(x)))P(xta,A y=gkv(&x);aA(x,ea1(enl,y)))a1(x))A1(enla,xtt||xta?enl(x):x)
A2(cat,P(xtaA&&ytaA,P(!mtc_(xx,yx),ed(x,y))A u=eac(cv(','),A_(mR(xy),mR(yy)),2);$(u,u=aA(mR(xx),u))xr;yr;u)
 x=enla(x);y=enla(y);$(!xn,swp(x,y))P(!yn,yr;x)$(xt-yt,x=Ny(blw(x));y=Nx(blw(y)))L w=tZ(xt),m=xn,n=yn;
 A u;$(Ar(x)==1&&ZA+(m+n)*w<=1<<Ab(x),u=AN(m+n,x))E(u=atn(xt,m+n);mc(uc,xc,m*w);$(xtX,$(Ar(x)==1,mr(AN(0,x)))E(mRa(x);xr))E(xr))
 mc(uc+m*w,yc,n*w);$(ytX,mRa(y))yr;u)
A apv(A x,O V*v)_(asrt(xtT);L n=xn,w=tZ(xt);
 $(Ar(x)==1&&ZA+w+n*w<=1L<<xb,x=AN(n+1,x))E(A y=atn(xt,n+1);$(Ar(x)>1&&xtX,mRa(x))E(x=AT(tL,x);asrt(ZV==8))xr;mc(yc,xc,n*w);x=y)
 V*p=xc+n*w;$(w==1,*(C*)p=*(C*)v)$(w==2,*(H*)p=*(H*)v)$(w==4,*(I*)p=*(I*)v)$(w==8,*(L*)p=*(L*)v)x)
A2(apd,asrt(xtT||xtA);P(xtA,P(!yta||!mtc_(xx,yx),apd(Ny(blw(x)),y))x=mut(x);A z=xy=mut(xy);F(An(z),zai=apd(zai,get(yy,i)))yr;x)
 $(!xtX&&(!ytt||xt-t_lst(yt)),x=blw(x))P(!xn,xr;enl(y))L v=xtX?(L)y:gl(y);apv(x,&v))
A room(A x,L l)_(asrt(xtC);L n=xn;P(Ar(x)==1&&ZA+n+l<=1L<<xb,x)xr;AN(n,atnv(tC,n+l,xc)))
A apc(A x,C c)_(asrt(xtC);x=room(x,1);xc[xn]=c;AN(xn+1,x))A catc(A x,O C*s,L l)_(asrt(xtC);x=room(x,l);mc(xc+xn,s,l);AN(xn+l,x))
//i.c
#define ZP 4096ll //pagesize
//S O UI lh=0x0100007f;SI UH htons_(UH x)_(x>>8|x<<8)S UC octet(C**p)_(UL r=pu(p);r>255?err("addr"),0:r)
//S UI inet_addr_(C**p)_(C*s=*p;P(!*s,lh)UC r[4];F(4,$(i,P(*s-'.',err("addr");0)s++)r[i]=octet(&s))*p=s;*(UI*)r)
//S L hskt(UI h,UH p)_(L f=skt(AF_INET,SOCK_STREAM,0);P(f<0,err("skt"),0)
// struct sockaddr_in sa;sa.sin_family=AF_INET;sa.sin_addr.s_addr=h;sa.sin_port=htons_(p);0>conn(f,(struct sockaddr*)&sa,Z(sa))?err("conn"),0:f)
//S L hops(C*s,L fl)_(C*t=s;W(*t&&*t-':',t++)P(!*t,L f=open(s,fl,0666);f<0?err("open"),0:f)
// UI h=inet_addr_(&s);P(*s-':',err("addr"),0)s++;UL p=pu(&s);*s?err("addr"),0:hskt(h,p))
//S I hop_(A x/*1*/,I fl)_(P(xtil,hskt(lh,gi(x)))P(xts,C*s=symptr(gs(x));!*s?1:*s-':'?et(),0:hops(s+1,fl))P(xtC,x=str0(x);dex(x,hops(xc,fl)))et(x))
A1(hop,en(x))
// A1(hop,ai(N(hop_(x,O_RDWR|O_CREAT))))
A1(hcl,asrt(xti);close(gi(x));au0)
A1(u0c,P(x==as(0)||(xtC&&!xn),xr;C b[1024];aCn(b,max(0,read(0,b,Z(b)))))x=N(u1c(x));x=N(scn(ac(10),&x,1));xn&&!An(xa[xn-1])?cut(al(-1),x):x)
A1(u1c,en(x))
//A1(u1c,I f=N(hop_(x,O_RDONLY));struct stat s;P(fstat(f,&s),err("stat"))L n=s.st_size;
// V*p=mmap_(0,n+ZP,3,0x22/*anon|priv*/,-1,0);P(p==(V*)-1,err("file"))A u=(A)(p+ZP);asrt(!(u%ZP));ul[-2]=0;u=AT(tC,AN(n,u));uR;
// V*q=mmap_(uc,n,1,0x12/*fixed|priv*/,f,0);close(f);P(q==(V*)-1,err("file"))asrt(q==uc);u)
A2(v0c,$(ytX,y=N(rdc(ac(10),&y,1)))ytC?v1c(x,N(apv(y,"\n"))):et(x,y))
A2(v1c,en(x,y))
//A2(v1c,L f=N(hop_(x,O_RDWR|O_CREAT|O_TRUNC));L n=yn;C*s=yc;yr;W(n>0,L k=write(f,s,n);P(k<=0,err("write"))s+=k;n-=k)$(f-1,close(f));au0)
//j.c
S C*s;S A0 jv;S C jw()_(W(Ci(" \n\t\r",*s)<4,++s)*s)
S A0(jd,I m=*s=='-';s+=m;C c=*s++;P(!dgt(c),0)D v=c-'0';W(dgt(*s),v*=10;v+=*s++-'0')$(*s=='.',s++;D t=1;W(dgt(*s),t/=10;v+=(*s++-'0')*t))
 $((*s|32)=='e',s++;s+=*s=='+';L e=pl(&s);D t=10;$(e<0,e=-e;t=.1)P(e>308,0)F(e,v*=t))ad(m?-v:v))
S A1(ju,I v=0;F(4,C c=*s++;v=16*v+(dgt(c)?c-'0':C3('a',c|32,'f')?(c|32)-'a'+10:99999);P(v<0,s--;0))
 P(v<128,apc(x,v))P(v<2048,x=apc(x,192|v>>6);apc(x,128|63&v))x=apc(x,224|v>>12);x=apc(x,128|63&v>>6);apc(x,128|63&v))
S A0(js,s++;A x=aC(0);W(1,C*t=s;UC c=*s++;W(c-'"'&&c-'\\'&&c>31,c=*s++)P(c<32,s--;xr;0)x=catc(x,t,s-1-t);P(c=='"',x)c=*s++;I i=Ci("\"\\/bfnrt",c);
                          $(i<8,x=apc(x,"\"\\/\b\f\n\r\t"[i]))E$(c=='u',x=ju(x))E(xr;s--;R 0)t=s)0)
S A0(ja,s++;A x=a0();P(jw()==']',s++;x)W(1,x=apd(x,Nx(jv()));P(*s==']',s++;x)Nx(*s==',');s++)0)
S A0(jo,s++;A x=aa(aS(0),a0());C c=jw();P(c=='}',s++;x)
 W(1,Nx(c=='"');xx=apd(xx,gS(Nx(js())));Nx(jw()==':');s++;xy=apd(xy,Nx(jv()));P(*s=='}',s++;x)Nx(*s==',');s++;c=jw())0)
S A jr(O C*t,L v)_(C c;W((c=*t++),P(c-*s,0)s++)al(v))
S A0(jv,C c=jw();A x=c=='['?ja():c=='{'?jo():c=='"'?js():c=='-'||dgt(c)?jd():c=='t'?jr("true",1):c=='f'?jr("false",0):c=='n'?jr("null",_0N):0;jw();x)
A1(json,P(!xtcC,et(x))x=str0(enla(x));s=xc;A u=jv();$(u&&*s,ur;u=0)P(!u,eso(x,s-xc);err("json");0)xr;u)
//k.c
S A1(__1,en(x))S A2(__2,en(x,y))S A1(sam,x)
O C vc[]={':','+','-','*','%','!','&','|','<','>','=','~',',','^','#','_','$','?','@','.','0','1','2','3','4','5','6','7','8','9','?','?'};
O V*vf[]={sam,flp,neg,fir,sqr,til,whr,rev,asc,dsc,grp,not,enl,nul,len,flr,str,unq,typ,val,u0c,u1c,__1,__1,__1,__1,__2,las,out,cmd,0,0,
          dex,add,sub,mul,dvd,mod,mnm,mxm,ltn,gtn,eql,mtc,cat,xpt,rsh,cut,cst,fnd,ap1,ap2,v0c,v1c,__2,__2,__2,__2,__2,com,__2,__2,0,0,
          eac,rdc,scn,eap,ear,eal}; // ' / \ ': /: \:                                                                     mkl plc
A1(mkn,P(xtaAX,ea1(mkn,x))A y=mR(cn[xt]);xtt?dex(x,y):rsh(len(x),y))
A2(id_/*x0y0*/,S O C t[]={4,0,0,1,1,2,2,3,3,2,4};ari(x)?mR(ci[t[Av(x)]][ytdD?0:ytiI?1:2]):mkn(fir(yR)))
A2(com,AK(Ak(y),AT(tq,a2(x,y))))AX(prj,P(xtX,app(x,a,n))UC k=max(n,Ak(x));F(n,k-=a[i]!=av_plc)A u=AK(k,atn(tp,n+1));ux=xR;mc(ua+1,a,n*ZV);u)
SN A getA(A x/*0*/,L i)_(asrt(xtA);A y=xy,u=a0();Fj(yn,u=apd(u,get(yaj,i)))aa(mR(xx),u))
A get(A x/*0*/,L i)_(xtX?mR(xai):xtI?ai(xii):xtL?al(xli):xtS?as(xii):xtC?ac(xci):xtD?ad(xdi):xta?get(xy,i):xtA?getA(x,i):xR)
A getr(A x/*0*/,L i)_(asrt(!xtt);0<=i&&i<xn?get(x,i):xn?mkn(get(x,0)):mR(cn[xt]))
S A2(idx_/*x0y1*/,asrt(xtT||xtaA);P(y==av_plc,flp(xR))P(ytX,eac(x,&y,1))P(yta,y=mut(y);yy=idx_(x,yy);y)P(fun(y),et(y))P(ytt,getr(x,gl(y)))
 y=N(gL(y));L w=tz(xt);A u=xtA?a0():atn(xt,yn);P(xtX||xtA,u=AN(0,u);F(yn,u=apd(u,getr(x,yli)))yr;u)
 P(w==0,C h=gc (cn[xt]);yr;F(un,L j=yli;uci=0<=j&&j<xn?xcj:h)u)
 P(w==2,I h=gi (cn[xt]);yr;F(un,L j=yli;uii=0<=j&&j<xn?xij:h)u)
 P(w==3,L h=gl_(cn[xt]);yr;F(un,L j=yli;uli=0<=j&&j<xn?xlj:h)u)en(y,u))
AX(app,P(xtT,P(xtX,L c=1;F(n,A y=a[i];L c0=c;c=ytt;x=N(!c0?eal(cv('@'),A_(x,y),2):i?idx(x,y):idx_(x,y)))x)n==1?idx_(x,*a):ein(n,a))
 P(xts,C*s=symptr(gs(x)),c=*s;A y=*a;s[1]?enn(n,a):n>1?ern(n,a):c=='j'?json(y):c=='k'?kst(y):c=='p'?prs(y):c=='t'?dex(y,al(time())):
  c=='x'?frk(y):c=='e'?yr,epr(),au0:enn(n,a))
 P(xta,A y=N(idx_(xy,N(fnd(mR(xx),*a))));P(n==1,y)dex(y,app(y,a+1,n-1)))P(xtA,P(n>1,ern(n,a))A y=*a;P(ytilIL,idx_(x,y))app(AT(ta,x),a,n))
 P(xtil,P(n>1,ern(n,a))A y=*a;$(ytc,y=enl(y))E(P(!ytC,et(y)))write(gl_(x),yc,yn);y)
 P(n<Ak(x),prj(x,a,n))P(xtv,n==2?((A2*)vf[32+Av(x)])(*a,a[1]):x==cv('@')?amd(a,n):x==cv('.')?dmd(a,n):enn(n,a))P(xtr,((AX*)vf[64+Av(x)])(xx,a,n))
 P(n>Ak(x),ern(n,a))P(xtu,((A1*)vf[Av(x)])(*a))P(xtw,C v=Av(x);AK(0<v&&v<4&&Ak(*a)==2?1:fun(*a)?Ak(*a):1,AV(v,atnv(tr,1,a))))P(xto,run(x,a,n))
 P(xtp,L m=xn-1,j=0;A b[m+n];F(xn-1,b[i]=xa[i+1]==av_plc&&j<n?a[j++]:mR(xa[i+1]))W(j<n,b[m++]=a[j++])app(xx,b,m))
 P(xtq,app(xx,&(A){N(app(xy,a,n))},1))etn(n,a))
A1(val,P(xtS,A y=glb;xr;F(xn,P(!yta,et())A z=yx,u=yy;P(!ztS||!utX,ed())I k=xii;L j=fndi(z,k);P(j<0,err(symptr(k)))y=uaj)yR)
 P(xtX,P(!xn,x)P(xn==1,fir(x))P(xn>9,err("mxa",x))x=mut(x);A u=app(xx,&xy,xn-1);mr(AN(1,x));u)
 P(xtC,x=N(cpl(N(prs(x))));dex(x,run(x,0,0)))xtc||xts?val(enl(x)):xta||xtr?las(AT(tX,x)):C3(tu,xt,tw)?al(Av(x)):xto||xtp||xtq?AT(tX,x):et(x))
A2(idx,dex(x,idx_(x,y)))A2(ap1,dex(x,app(x,&y,1)))A2(ap2,y=enla(y);L n=yn;P(!n,yr;x)P(n>8,err("mxa",x,y))y=mRa(Nx(blw(y)));A u=app(x,ya,n);xr;yr;u)
S A set(A x,L i,A y)_(asrt(Ar(x)==1);$(!xtX&&(!sim(y)||xt-t_lst(yt)),x=blw(x))
 P(xtX,mr(xai);xai=y;sim(y)?sqz(x):x)P(xtC,xci=gc(y);x)P(xtI,xii=gi(y);x)P(xtL,xli=gl(y);x)P(xtD,xdi=gd(y);x)P(xtS,xii=gs(y);x)en(x,y))
#define cki(i,n,a...) P((i)<0||(n)<=(i),ei(a))
S A*pth(A x/*1*/)_(x=enla(x);A y=glb;asrt(xtS&&Ar(y)==1&&yta&&At(yx)==tS&&At(yy)==tX);L j=fpi(&yx,*xi);$(j==An(yy),yy=apd(yy,xn>1?aa0():au0))A*p=A(yy)+j;
 F(xn-1,A y=*p;P(!yta,(A*)ed(x))*p=y=mut(y);A z=yx;P(!ztS,(A*)ed(x))L j=fpi(&yx,xi[i+1]);A u=yy;P(!utX,(A*)ed(x))yy=j==un?apd(u,aa0()):mut(u);
  asrt(Ar(yy)==1);p=A(yy)+j)
 xr;p)
S A mend(O A*a,I n,AA*f)_(A*p=pth(*a);P(!p,mrn(n-1,a+1);0)A b[8];*b=*p;*p=au0;mc(b+1,a+1,(n-1)*ZV);*p=mR(N(f(b,n))))
AA(am1,A x=*a,y=a[1],z=a[2];P(n==3&&!fun(z),am1(A_(x,y,av0,z),4))P(xtt,etn(n,a))
 P(xta,x=mut(x);xx=unq(cat(xx,yR));xy=cat(xy,rsh(al(An(xx)-An(xy)),id_(z,xy)));
  A b[8];*b=xy;b[1]=fnd(mR(xx),y);mc(b+2,a+2,(n-2)*ZV);xy=am1(b,n);P(!xy,xy=au0;xr;0)x)
 P(ytt,x=mut(x);y=gL(y);P(!y,xr;mrn(n-2,a+2);0)
  L i=gl(y);P(i<0||i>=xn,xr;ein(n-2,a+2))A b[8];*b=get(x,i);mc(b+1,a+3,(n-3)*ZV);A u=app(z,b,n-2);zr;Nx(u);set(x,i,u))
 P(n==4&&(xtIL||xtD)&&ytIL&&ari(z)&&xt==t_lst(At(a[3])),x=mut(x);A u=a[3];L f=Av(z),d=utT;u=enla(u);y=gL(y);yr;ur;$(d&&yn-un,el(x))
  $( xtD,arD(f,yn,L j=yli;cki(j,xn,x)D a=xdj;D b=ud[d*i];xdj=))
  E$(xtI,arI(f,yn,L j=yii;cki(j,xn,x)I a=xij;I b=ui[d*i];xij=))
  E$(xtL,arL(f,yn,L j=yli;cki(j,xn,x)L a=xlj;L b=ul[d*i];xlj=))x)
 P(n==4&&xtC&&ytL&&z==av0&&t_lst(At(a[3]))==tC,x=mut(x);A u=a[3];L d=utT;u=enla(u);yr;ur;$(d&&yn-un,el(x))F(yn,L j=yli;cki(j,xn,x)xcj=uc[d*i])x)
 rdc(cv('@'),a,n))
AA(amd,A x=*a;xts?mend(a,n,am1):am1(a,n))
AA(dm1,A x=*a,y=a[1],z=a[2];L m=len_(y);P(!m||y==au0,yr;A b[8];*b=x;mc(b+1,a+3,(n-3)*ZV);dex(z,app(z,b,n-2)))
 P(m==1,A b[8];mc(b,a,n*ZV);b[1]=fir(y);am1(b,n))P(n-4,enn(n,a))K("{[x;y;z;u]@[x;*y;.[;1_y;z;];u]}",x,y,z,a[3]))
AA(dmd,A x=*a,y=a[1],z=a[2];n==3&&fun(x)?try(x,y,z):n==3&&!fun(z)?dmd(A_(x,y,av0,z),4):xtsS?mend(a,n,dm1):dm1(a,n))
//m.c
#define nxt(x) A(x)[-2]
L mt,mu;S A mx[48];A syml,glb,cn[tn],ci[5][3];S cold A em2()_(write(1,"oom\n",4);exit(1);0)
S A ma(I b)_(asrt(4<b);P(b>47,em2())mu+=1ll<<b;A x=mx[b];P(x,mx[b]=nxt(x);AB(b,x))L i=b+1;W(i<ZZ(mx)&&!mx[i],i++)
 $(i<ZZ(mx),x=mx[i];mx[i]=nxt(x))E(i=max(b,24);V*p=mmap_(0,1L<<i,3,0x22/*anon|priv*/,-1,0);P((L)p<=0,em2())mt+=1L<<i;x=(A)(p+ZA))
 W(i>b,i--;A y=mx[i]=(A)(x+(1L<<i));nxt(y)=0)AB(b,x))
S A1(mf,asrt(!pkd(x));asrt(!Ar(x));UC b=xb;nxt(x)=mx[b];mx[b]=x;mu-=1ll<<b;0)A1(mut,P(pkd(x)||Ar(x)==1,x)xr;A y=atnv(xt,xn,xc);$(ref(y),mRa(y))y)
A1(mr,asrt(x);P(pkd(x),0)asrt(Ar(x)>0);$(!--Ar(x),mf(x);$(ref(x),mrn(xn,xa)))0)V mrn(L n,O A*a){F(n,mr(a[i]))}A1(mRa,F(xn,mR(xai))x)
A gkv(A*p)_(A x=*p;asrt(xn==2);P(--Ar(x),*p=mR(xx);mR(xy))mf(x);*p=xx;xy)I sym(A x/*1*/)_(L m=mu-((Ar(x)==1)<<Ab(x));A u=fpa(&syml,str0(x));mu=m;u)
A atn(UC t,L n)_(I b=67-__builtin_clzll((ZA>>3)+(t==tC?n>>3:n));A x=N(ma(b));Ar(x)=1;AN(n,AT(t,x)))
A atnv(UC t,L n,O V*v)_(A u=atn(t,n);mc(uc,v,n*tZ(t));u)A1(ax,Ar(x)>1?Ar(x)--,atn(xt,xn):x)A0(aa0,aa(enl(as(0)),enl(au0)))
A1(a1,atnv(tX,1,A_(x)))A2(a2,atnv(tX,2,A_(x,y)))A3(a3,atnv(tX,3,A_(x,y,z)))A2(aA,atnv(tA,2,A_(x,y)))A2(aa,atnv(ta,2,A_(x,y)))
A aCn(O C*s,L n)_(atnv(tC,n,s))V*mc(V*x,O V*y,L n)_(C*p=x;O C*q=y;F(n,p[i]=q[i])x)A aCm(O C*s,O C*t)_(aCn(s,t-s))V mz(V*x,L n)_(C*p=x;F(n,p[i]=0))
A aCz(O C*s)_(aCn(s,strlen(s)))I memcmp(O V*x,O V*y,L n)_(O C*p=x,*q=y;F(n,I d=*p++-*q++;P(d,d))0)L strlen(O C*x)_(O C*p=x;W(*p,p++)p-x)
S I line(C*p,C*q)_(A x=val(aCm(p,q));P(x,mr(out(x));1)epr();0)S C*skp(C*p)_(W(*p=='/'&&p[1]==10,p+=3;W(*p&&(p[-1]-10||p[-2]-'\\'||p[-3]-10),p++))p)
A1(ldf,x=str0(N(u1c(x)));C*p=xc;W(*p,C*q=p=skp(p);W(*q&&(*q-10||q[1]==32||q[1]=='}'),q++)Nx(line(p,q));p=q+!!*q)xr;au0)
// asm(".globl _start\n_start:pop %rdi\nmov %rsp,%rsi\njmp main");
/*
V main(L n,C**a)_(A x=syml=aX(5);F(xn,xai=aCn(&"_xyzo"[i],!!i))glb=aa0();cn[tX]=aX(0);cn[tC]=cn[tc]=ac(32);cn[tL]=cn[tl]=al(_0N);
 cn[tI]=cn[ti]=al(_0Ni);cn[tD]=cn[td]=ad(_0n);cn[tS]=cn[ts]=as(0);cn[to]=cn[tp]=cn[tq]=cn[tr]=cn[tu]=cn[tv]=cn[tw]=au0;
 S O struct{D d;L i,l;}t[]={{0,0,0},{1,1,1},{_0w,_0Wi,_0W},{-_0w,-_0Wi,-_0W},{_0n,_0Ni,_0N}};
 F(5,ci[i][0]=ad(t[i].d);ci[i][1]=ai(t[i].i);ci[i][2]=al(t[i].l))
 $(n>1,exit(!ldf(aCz(a[1]))))C b[256];L m=0,k;W(0<(k=read(0,b,256)),C*p=b,*q=p+m,*r=q+k;W(q<r,$(*q==10,line(p,q);p=q+1)q++)mc(b,p,m=q-p));exit(0))
*/
V repl(L n,C**a)_(A x=syml=aX(5);F(xn,xai=aCn(&"_xyzo"[i],!!i))glb=aa0();cn[tX]=aX(0);cn[tC]=cn[tc]=ac(32);cn[tL]=cn[tl]=al(_0N);
 cn[tI]=cn[ti]=al(_0Ni);cn[tD]=cn[td]=ad(_0n);cn[tS]=cn[ts]=as(0);cn[to]=cn[tp]=cn[tq]=cn[tr]=cn[tu]=cn[tv]=cn[tw]=au0;
 S O struct{D d;L i,l;}t[]={{0,0,0},{1,1,1},{_0w,_0Wi,_0W},{-_0w,-_0Wi,-_0W},{_0n,_0Ni,_0N}};
 F(5,ci[i][0]=ad(t[i].d);ci[i][1]=ai(t[i].i);ci[i][2]=al(t[i].l))
 $(n>1,exit(!ldf(aCz(a[1]))))C b[256];L m=0,k;W(0<(k=read(0,b,256)),C*p=b,*q=p+m,*r=q+k;W(q<r,$(*q==10,line(p,q);p=q+1)q++)mc(b,p,m=q-p));exit(0))

//o.c
I mtc_(A x,A y/*x0y0*/)_(P(x==y,1)P(xt-yt||pkd(x)||xn-yn||(xtr&&Av(x)-Av(y)),0)P(!ref(x),!memcmp(xc,yc,xn*tZ(xt)))F(xn,P(!mtc_(xai,yai),0))1)
S I cmpL(L x,L y)_(x<y?-1:x>y?1:0)
S I cmp_(A x,A y/*x0y0*/)_(P(x==y,0)I d=xt-yt;P(d,d)P(xti||xtc,cmpL(gi(x),gi(y)))P(xtl,cmpL(gl_(x),gl_(y)))P(xtd,D u=gd_(x),v=gd_(y);u<v?-1:u>v?1:0)
 P(xts,cmp_(symstr(gi(x)),symstr(gi(y))))
 $(!pkd(x),L n=min(xn,yn);I r=cmpL(xn,yn);P(xtT,F(n,A z=get(x,i),u=get(y,i);I d=cmp_(z,u);zr;ur;P(d,d))r))cmpL(x,y))
S L bef(A*a,L i,L j,I d)_(L r=cmp_(a[i],a[j]);r?d*r<0:i<j)
S V sft(A*a,L*l,L i,L j,I d)_(W(1,L k=1+2*i;$(k>j,B)$(k+1<=j&&bef(a,l[k],l[k+1],d),k++)$(!bef(a,l[i],l[k],d),B)swp(l[i],l[k])i=k))
S A grd(A x/*1*/,I d)_(P(xtX,d=d?-1:1;A*a=xa,u=til(al(xn));L*l=ul,n=xn,i=n/2;W(i-->0,sft(a,l,i,n-1,d))i=n-1;W(i>0,swp(l[i],*l)sft(a,l,0,--i,d))xr;u)
 $(xtL,L n=xn;A y=ax(x);$(d,L m=_0N;F(n,$(xli>m,m=xli))F(n,yli=m-xli))E(L m=_0W;F(n,$(xli<m,m=xli))F(n,yli=xli-m))x=y;
  UC*a=(UC*)C(y=aC(n*Z(*a)));A z=aL(n),u=aL(n);L nc=1+(1<<8*Z(*a));L c[nc];mz(c,8*nc);
  F(n,a[i]=xli)F(n,c[a[i]+1]++)F((1<<8*Z(*a))-1,c[i+1]+=c[i])F(n,ul[c[a[i]]++]=i)
  Fj(8/Z(*a)-1,F(n,a[i]=xl[uli]>>(j+1)*8*Z(*a))mz(c,8*nc);F(n,c[a[i]+1]++)$(c[1+*a]-n,F((1<<8*Z(*a))-1,c[i+1]+=c[i])F(n,zl[c[a[i]]++]=uli)swp(z,u)))
  xr;yr;zr;R u)
 P(xtC||xtI,grd(N(gL(x)),d))P(xtS,grd(N(ea1(str,x)),d))P(xta,A y=gkv(&x);idx(x,N(grd(y,d))))P(xtD,grd(blw(x),d))et(x))
A1(grp,P(xtt,xtl?K("{(2#x)#1,&x}",x):et(x))P(xta,A u=grp(gkv(&x));asrt(Ar(u)==1);uy=idx(x,uy);u)A y=atn(xt,0),u=a0();UC w=tz(xt);
 F(xn,L j=w==ZR?fpa(&y,mR(xai)):!w?fpc(&y,xci):w==2?fpi(&y,xii):w==3?fpl(&y,xli):0;$(j==un,u=apd(u,aL(0)))uaj=apv(uaj,&i))xr;aa(y,u))
A2(mtc,I r=mtc_(x,y);xr;yr;ai(r))A1(asc,xts||xti?hop(x):grd(x,0))A1(dsc,xti?hcl(x):grd(x,1))
//p.c
S I ltr(UC c)_(c|=32;C3('a',c,'z')||c>127)S I ldg(C c)_(ltr(c)||dgt(c))S I cy(UC c)_((c|1)==0xd1)SI I unh(C c)_((c&15)+9*(c>'9'))
S C*s,*s0,na;S A pb(A,C);S I num(C*s)_(dgt(s[*s=='-']))S A1(p1,xn-1?x:fir(x))I Ci(O C*s,C c)_(O C*t=s;W(*t&&*t-c,t++)t-s)
S A1(v1,P(xtv&&x-av0,au(Av(x)))$(xtX&&xn==2&&xx==aw(0),x=mut(x);xy=v1(xy))x)L pu(C**p)_(C*s=*p;L v=0;C c=*s;W(dgt(c),v=10*v+c-'0';c=*++s)*p=s;v)
S A0(pC,asrt(*s=='"');A x=aC(0);C c=*++s;W(c&&c!='"',$(c=='\\',c=*++s;I i=Ci("tnr0",c);$(i<4,c="\t\n\r"[i]))x=apc(x,c);c=*++s)P(!c,ep())c=*++s;x)
A pS(C**p)_(C*s=*p,c=*s;$(c&0x80,$(cy(c),s+=2;c=*s;W(1,$(dgt(c),c=*++s)E$(cy(c),s+=2;c=*s)E(B)))E(W(((c=*++s)&0xc0)==0x80)))
 E$(c==':',W(ldg(c=*++s)||Ci("./:",c)<3))E(W(ldg(c),c=*++s))A u=aCm(*p,s);*p=s;u)
S A pSs(C d)_(A x=aS(0);W(1,I v=sym(d-'`'||*s-'"'?pS(&s):pC());x=apv(x,&v);P(*s-d,x)++s)0)L pl(C**p)_(I m=**p=='-';*p+=m;(1-2*m)*pu(p))
S A1(shy,P(!xn,x)A y=xa[xn-1];$(ytX&&yn,A z=yx;P(z==av0||ztu&&yn>2,apd(x,au0)))x)S A lam(C k,A s,A b,A l)_(AK(k,atnv(tX,5,A_(s,b,au0,l,au0))))
S A pt(C*v)_(A x;C c=*s;P(c=='"',p1(N(pC())))P(c=='`',++s;x=pSs(c);xn>1?enl(x):x)P(c=='(',s++;x=N(pb(enl(av_mkl),')'));xn-2?x:xy==av_plc?xr,a0():las(x))
 P(ltr(c),C*t=s;x=pSs('.');$(s-t==1&&(c=='y'||c=='z'),na=max(na,c-'w'))AO(t-s0,p1(x)))
 P(c=='{',C nb=na;na=1;C*s1=s0,*t=s0=s++;A y;$(*s-'[',y=au0)E(s++;y=sqz(N(pb(a0(),']')));P(!ytS||yn>8,ep(y)))
  A z=pb(a0(),'}');P(!z,yr;s0=s1;0)$(y==au0,y=atnv(tS,na,(I[]){1,2,3}))E(na=yn)x=cpl(lam(na,aCn(t,s-t),shy(z),y));s0=s1;na=nb;x)
 I i=Ci("'/\\[",c);P(i<3,c=*++s;I h=c==':';s+=h;*v=1;aw(i+3*h))
 P(num(s)&&(c-'-'||({C b=s[-1];!ldg(b)&&Ci(")]}\"",b)==4;})),P(s[1]==':',L u=s[2]==':';s+=2+u;L i=20+c-'0';*v=1;u?au(i):av(i))
  P(c=='0'&&s[1]=='x',s+=2;C*p=s;W(dgt(*p)||C3('a',*p,'f'),p++)L m=(p-s)/2;x=aC(m);F(m,xci=unh(*s)<<4|unh(s[1]);s+=2)p1(x))
  L fp=0;C*p=s;c=*p;W(1,p+=*p==32;p+=*p=='-';c=*p;$(!ldg(c),B)W(ldg(c)||c=='.'||c==':',fp|=c=='.'||c=='n'||c=='w';c=*++p))
  P(!fp,x=aL(0);W(1,L l=pl(&s);c=*s;$(!l&&c=='N',l=_0N;c=*++s)x=apv(x,&l);$(c-32||!num(s+1),B)c=*++s)$(c=='i',s++;x=N(gI(x)))E$(c=='j',s++)p1(x))
  x=aD(0);W(1,I m=*s=='-';s+=m;D d=0;c=*s;W(dgt(c),d=10*d-'0'+c;c=*++s)
              $(c=='.',c=*++s;D w=.1;W(dgt(c),d+=w*(c-'0');w/=10;c=*++s))E$(c=='n',c=*++s,d=_0n)E$(c=='w',c=*++s;d=_0w)
              d*=1-2*m;x=apv(x,&d);$(c-32||!num(s+1),B)c=*++s)p1(x))
 i=Ci(vc,c);P(i>19,av_plc)I u=*++s==':';s+=u;*v=1;u?au(i):av(i))
S A pT(C*v)_(A x=N(pt(v));W(1,C c=*s;I i=Ci("'/\\[",c);P(i>3,x)s++;$(i>2,x=AO(s-1-s0,N(pb(a1(x),']')));$(xn==2&&xy==av_plc,xy=au0)*v=0)
                                                                   E(I u=*s==':';s+=u;x=a2(aw(i+3*u),x);*v=1))x)
S V pw()_(C c=*s;W(c==32,c=*++s)P(c-'/')c=s[-1];P(s>s0&&c-32&&c-10)W((c=*++s)&&c-10))
S A pe(A x,C*v)_(pw();P(s>s0&&*s=='\\'&&s[-1]==32,s++;A u=pe(0,v);P(!u,$(x,xr)0);*v=0;u=a2(au_out,u);$(x,u=a2(x,u))u)
 UH o=s-s0;C w=0;A y=pT(&w);P(!y,$(x,xr)0)P(y==av_plc,x?x:y)P(!w,A z=pe(y,v);P(!x,z)Nx(z);*v?a3(av_com,x,z):AO(o,a2(x,z)))
 A z=pe(0,v);P(!z,$(x,xr)yr;0)P(z==av_plc,*v=1;!x?y:!ytu?AO(o,a3(y,x,z)):ep(x,y))
 *v&=y!=av0;$(!x,y=v1(y))*v?a3(av_com,x?AO(o,a3(y,x,av_plc)):y,z):AO(o,x?a3(y,x,z):a2(y,z)))
S A pb(A x,C e)_(W(1,C v=0;A y=Nx(pe(0,&v));$(y==av_plc&&(!e||e=='}'),y=au0)x=apv(x,&y);$(*s-';'&&*s-10,B)s++)P(*s-e,ep(x))s++;x)
A1(prs,P(!xtC,et(x))s=s0=C(x=str0(x));A y=*s=='\\'?a1(a2(au_cmd,aCz(s+1))):pb(a0(),0);!y?eso(x,s-s0),0:lam(0,x,shy(y),aS(0)))
//s.c
S A sl(L v)_(C b[20],*s=b;
 $(v==_0N,*s++='0';*s++='N')E($(v<0,v=-v;*s++='-')UL l=0,t=10;W(t<=(UL)v,t*=10;l++)s+=l;F(l+1,UL k=(UL)v/10,r=(UL)v%10;*s--='0'+r;v=k)s+=l+2)aCm(b,s))
S A sd(D v)_(C b[400],*s=b;$(v<0,v=-v;*s++='-')
 $(d2l(v)<<1>>53==-1,*s++='0';*s++=v==_0w?'w':'n')
 E(D p=1,q=10;W(q<=v,p=q;q*=10)W(p>=1,L d=(L)(v/p);v-=d*p;p/=10;*s++='0'+d)*s++='.';F(17,L d=(L)(v/p);v-=d*p;p/=10;*s++='0'+d;$(v==0,B)))
 aCm(b,s))
A1(str0,asrt(xtC);x=room(x,1);xc[xn]=0;x)
A1(str,xtc?enl(x):xts?mR(symstr(gs(x))):xtl?sl(gl(x)):xtd?sd(gd(x)):xto?fir(AT(tX,x)):
 xtu||xtv?atnv(tC,1+(Av(x)>19)+xtu,(C[]){vc[Av(x)],':',':'}):xtw?atnv(tC,1+(Av(x)>2),(C[]){"'/\\'/\\"[Av(x)],':'}):xtt?kst(x):ea1(str,x))
S A kp(A x,I p)_(x=kst(x);p?apc(cat(ac('('),x),')'):x)S O C esc(C c)_(c?"tnr\"\\"[Ci("\t\n\r\"\\",c)]:'0')
S A1(kr,kp(x,                                    xtq||xtr||xtu||xtv||xtw))
S A1(kl,kp(x,xtX||xtC?xn==1:xtT?xn<=1:xtaA||     xtq||xtr||xtu||xtv||xtw))
S A1(ka,kp(x,xtX||xtC?xn==1:xtT?xn<=1:xtaA||xtp||xtq||               xtw))
A1(kst,P(x==av_plc,aC(0))P(xtl||xtd||xto||xtu||xtv||xtw,str(x))P(xtiI,apc(kst(gL(x)),'i'))P(xtT&&xn==1,cat(ac(','),kr(fir(x))))
 P(xts,x=str(x);C*s=xc;mr(pS(&s));cat(ac('`'),*s?kst(xn-1?x:fir(x)):x))
 P(xtcC,x=enla(x);I b=0,n=xn,m=n+2;F(n,C c=xci,e=esc(c);$(!C3(32,c,126)&&!e,b=1;B)m+=!!e)A z=aC(b?2+2*n:m);C*s=zc;
  $(b,*s='0';s[1]='x';s+=2;F(n,C c=xci;*s++=hex(c>>4&15);*s++=hex(c&15)))E(*s++='"';F(n,C c=esc(xci);$(c,*s++='\\';*s++=c)E(*s++=xci))*s='"')xr;z)
 P(xtT||xtA,K("{$[`X=t:@x;(0x28,0x3b/`k'x),0x29;`S=t;$[#x;,/`k'x;\"0#`\"];`A=t;\"+\",`k@+x;#x;0x20/`k'x;`D=t;\"0#0n\";`L=t;\"!0\";\"???\"]}",x))
 P(xta,A z=gkv(&x);cat(apc(kl(x),'!'),kr(z)))
 P(xtp,A z=xx;xn==3&&(ztv||ztr)&&xy-av_plc&&xz==av_plc?dex(x,cat(kl(mR(xy)),kst(zR))):K("{@[0x3b/x;#*x:`k'. x;0x5b],0x5d}",x))
 P(xtq,K(",/`k'.:",x))P(xtr,cat(ka(fir(AT(tX,x))),kst(aw(Av(x)))))xr;aCz("???"))
A1(out,K("{$[x~(::);x;(`X=@x)&1<#x;1(0x28,0x0a20/`k'x),0x290a;1`k[x],0x0a];x}",x))
//v.c
A1(sqz,P(!xtX||!xn,x)A y=xx;UC t=yt;P(!sim(y)&&t-ta,x)L n=xn;F(n,A y=xai;P(t-yt,x))
 P(t==ta,A z=yx;F(n,A y=xai;P(!mtc_(yx,z),x))aA(zR,flp(ea1(val,x))))
 t=t_lst(t);A u=atn(t,n);
 $(t==tC,F(n,uci=gc(xai)))E$(t==tS,F(n,uii=gs(xai)))E$(t==tI,F(n,uii=gi(xai)))E$(t==tL,F(n,uli=gl_(xai)))E$(t==tD,F(n,udi=gd_(xai)))E(UR)xr;u)
A1(blw,P(xtX,x)P(xtt,a1(x))P(xta,et(x))L n=len_(x);A u=aX(n);F(n,uai=get(x,i))xr;u)
L tru(A x/*1*/)_(xr;sim(x)?gl_(x):fun(x)?!xtu||Av(x):xn)A2(dex,xr;y)A1(fir,xtt?x:dex(x,getr(x,0)))A1(las,xtt?x:dex(x,getr(x,xn-1)))
A1(flp,P(xtaA,$(xta,A y=xy;P(!ytX||!yn,er(x))F(yn,A z=yai;P(!ztT,en(x)))L m=An(*ya);F(yn,A z=yai;P(zn-m,el(x))))AT(xt^ta^tA,x))P(xtt,enl(enl(x)))
 P(!xtX||!xn,enl(x))L m=xn,n=-1;UC t=t_lst(At(xx));F(m,A y=xai;$(t-t_lst(yt),t=tX)$(!sim(y),P(fun(y),et(x))$(n<0,n=yn)E(P(n-yn,el(x)))))
 A u=aX(n<0?1:n);F(un,A y=a0();Fj(m,y=apd(y,get(xaj,i)))uai=y)xr;u)
A1(til,P(xtX,xn?ed(x):x)P(xto,val(x))P(xta,fir(AT(tX,x)))P(xtiI,gI(N(til(gL(x)))))
 P(xtl,L n=gl(x);P(n<0&&n!=_0N,add(al(n),N(til(al(-n)))))A u=aL(n);F(n,uli=i)u)P(!xtL,et(x))
 L p=1;F(xn,p*=xli;P(xli<0||p<0,ed(x)))L q=p;A u=aX(xn);F(un,L m=xli;A y=uai=aL(p);$(q,q/=m;L v=0;F(p/q,Fj(q,yl[i*q+j]=v);v++;v*=v<m)))xr;u)
A1(whr,P(xtA||xtX,et(x))P(xta,A y=gkv(&x);idx(x,Nx(whr(y))))
 x=enla(x);x=N(gL(x));L n=0;F(xn,P(xli<0,ed(x))n+=xli)A u=aL(n);xr;n=0;F(xn,Fj(xli,ul[n++]=i))u)
A1(rev,P(xtt,x)P(xta,AT(ta,N(ea1(rev,AT(tX,x)))))P(xtA,A y=gkv(&x);aA(x,Nx(ea1(rev,y))))
 x=mut(x);L j=xn,m=(xn+1)/2;I w=tZ(xt);P(w==1,F(m,--j;C v=xci;xci=xcj;xcj=v)x)
                                       P(w==4,F(m,--j;I v=xii;xii=xij;xij=v)x)
                                       P(w==8,F(m,--j;L v=xli;xli=xlj;xlj=v)x)UR;0)
A1(typ,xr;as(sym(atnv(tC,1,&tsym[xt]))))A1(len,dex(x,al(len_(x))))L len_(A x/*0*/)_(xtT?xn:xta?len_(xy):!xtA?1:An(xy)?len_(*A(xy)):1)
A1(unq,P(!xtT,et(x))A u=atn(xt,0);I w=tz(xt);P(w==ZR,F(xn,fpa(&u,mR(xai)))xr;u)
                                             P(w==0,F(xn,fpc(&u,xci))xr;u)
                                             P(w==2,F(xn,fpi(&u,xii))xr;u)
                                             P(w==3,F(xn,fpl(&u,xli))xr;u)UR;0)
S A2(fil,P(ytX||yta,eac(cv('^'),A_(x,y),2))P(ytt,fir(xpt(x,enl(y))))K("{@[y;&^y;:;x]}",x,y))
A2(xpt,P(xtt,fil(x,y))P(xtaA||ytaA,en(x,y))y=enla(y);$(xtX,y=blw(y))K("{x@&^y?x}",x,y))
A slc_(A x/*0*/,L i,L n)_(asrt(xtT);UC t=xt;L w=tZ(t);A u=atn(t,n);mc(uc,xc+i*w,n*w);$(t==tX,mRa(u);u=sqz(u))u)
A2(cut,
 P(ytl,P(!xtT,et(x,y))L i=gl(y);P(i<0||i>=xn,x)A u=atn(xt,xn-1);L w=tZ(xt);mc(uc,xc,i*w);mc(uc+i*w,xc+i*w+w,(xn-i-1)*w);$(xtX,u=sqz(mRa(u)))xr;u)
 P(yta,rsh(xpt(mR(yx),x),y))P(ytt,et(x,y))x=Ny(gL(x));A u;L m=yn;
 $(xtL,L n=xn,l=yn;x=apv(x,&l);L p,q=*xl;F(n,p=q;q=xl[i+1];P(p>q,ed(x,y))P(p<0||q>m,el(x,y)))q=*xl;u=aX(n);F(n,p=q;q=xl[i+1];uai=slc_(y,p,q-p)))
 E(L p=gl_(x);P(p==_0N,ed(x,y))$(llabs(p)<m,u=slc_(y,p<0?0:p,m-llabs(p)))E(u=atn(yt,0)))
 xr;yr;u)
S L i2l(I i)_(i==_0Ni?_0N:i)S I l2i(L l)_(l==_0N?_0Ni:l)
A1(gL,P(xtlL,x)P(xtd,al((L)gd(x)))P(xtD,A u=aL(xn);F(un,uli=(L)xdi)xr;u)x=N(gI(x));P(xtt,al(i2l(gi(x))))A u=aL(xn);F(un,uli=i2l(xii))xr;u)
S A1(gC,P(xtcC,x)x=N(gI(x));P(xtt,ac(i2l(gi(x))))A u=aC(xn);F(un,uci=xii)xr;u)
A1(gD,P(xtdD,x)x=N(gL(x));P(xtt,ad(gl(x)))A u=aD(xn);F(un,udi=xli)xr;u)
A1(gI,P(xtiI,x)P(xtl,ai(l2i(gl(x))))P(xtL,A u=aI(xn);F(un,uii=l2i(xli))xr;u)P(xtc,ai(gc(x)))P(xtC,A u=aI(xn);F(un,uii=(UC)xci)xr;u)et(x))
A1(gS,P(xtsS,x)P(xtcC,as(sym(enla(x))))et(x))
A2(cst,P(ytaAX,eac(cv('$'),A_(x,y),2))P(xts,C*s=symptr(gs(x)),c=*s*!s[1];!c?gS(y):c=='c'?gC(y):c=='i'?gI(y):c=='j'?gL(y):c=='f'?gD(y):en(y))
 P(xtl,L n=gl(x);P(n<0,en(y))P(!ytcC,et(y))A u=aC(n);y=enla(y);L m=yn;yr;mc(uc,yc,min(n,m));F(max(0,n-m),uc[m+i]=32)u)en(x,y))
//w.c
S AX(enc,P(!xtilIL,etn(n,a));P(n>1,ern(n,a))A y=N(gL(*a));P(sim(y),A z=enc(x,A_(enl(y)),1);zn?fir(flp(z)):dex(z,aL(0)))
 P(sim(x),UL v=gl_(x),r=0,m=0,b=1;F(yn,UL w=yli;$(r<w,r=w))W(m<64&&b<=r,m++;b*=v)x=aL(m);F(m,xli=v)dex(x,enc(x,&y,1)))
 P(!xn,yr;a0())A u=aX(xn);y=mut(y);for(L i=xn-1;i>0;i--){UL m=xli;m+=!m;A z=uai=aL(yn);Fj(yn,UL v=ylj,w=ylj=v/m;zlj=v-w*m)}
 UL m=*xl;ux=y;$(m,Fj(yn,ylj%=m))u)
S AX(spl,asrt(xtcC);P(n>1,ern(n,a))A y=*a;P(!ytC,et(y))C*s=xtc?(V*)&x:xc;L l=len_(x);P(!l,el(y))A u=a0();C*p=yc,*q=yc,*q2=yc+yn,*q1=q2+1-len_(x);
 W(q<q1,C m=1;F(l,m&=s[i]==q[i])$(m,u=apd(u,aCm(p,q));p=q+=l)E(q++))$(x-ac(10)||p<q2,u=apd(u,aCm(p,q2)))yr;u)
S AX(join,asrt(xtcC);P(n>1,ern(n,a))A y=*a;P(!ytX,et(y))C*s=xtc?(V*)&x:xc;L m=len_(x),k=yn,l=m*(k-!!k);F(k,A z=yai;P(!ztcC,et(y))l+=len_(z))
 A u=aC(l);C*p=uc;F(k-1,A z=yai;$(ztc,*p++=gc(z))E(mc(p,zc,zn);p+=zn)mc(p,s,m);p+=m)$(k,A z=ya[k-1];$(ztc,*p=gc(z))E(mc(p,zc,zn)))yr;u)
A ea1(A1 f,A x)_(P(xtt,f(x))P(xta,x=mut(x);xy=ea1(f,xy);P(!xy,xy=au0;xr;0)x)
 I b=xtX&&Ar(x)==1;L n=len_(x);P(!n,x)A u=a0();F(n,A y=f(b?xai:get(x,i));$(!y,$(b,mrn(xn-i-1,xa+i+1))xr;ur;u=0;B)u=apd(u,y))$(b,x=AN(0,x))xr;u)
S L cfm(O A*a/*0*/,L n)_(L m=-1;F(n,A x=a[i];$(!xtt,L l=len_(x);P(m>=0&&m-l,-2)m=l))m)
S AX(eaca,A z,b[8];F(n,A y=a[i];$(yta,z=yx;B))zR;F(n,A y=b[i]=a[i];$(yta,P(!mtc_(z,yx),zr,edn(n,b))b[i]=val(y)))A u=eac(x,b,n);(u?aa:dex)(z,u))
AX(eac,P(xtil,n>1?ern(n,a):K("{y(!x)+/:!0|1-x-#y}",xR,*a))
 A b[8];C t[8];L m=-1;F(n,A y=b[i]=a[i];P(yta,eaca(x,a,n))t[i]=pkd(y)?0:ytt?1:ytX?2+(Ar(y)>1):4;$(t[i]>1,L l=len_(y);P(m>=0&&m-l,eln(n,a))m=l))
 P(m<0,app(x,a,n))F(n,$(t[i]==1,Ar(a[i])+=m))A u=m?0:a0(); //0:pkdatm,1:refatm,2:tX(r=1),3:tX(r>1),4:other
 Fj(m,F(n,A y=a[i];$(t[i]==2,b[i]=yaj)$(t[i]>2,b[i]=get(y,j)))
      A z=app(x,b,n);$(!j,u=sim(zt)?AN(0,atn(t_lst(zt),m)):a0())
      $(!z,ur;u=0;F(n,A y=a[i];$(t[i]==1,Ar(y)-=m-j-1)$(t[i]==2,mrn(m-j-1,ya+j+1)))B)u=apd(u,z))
 F(n,mr(t[i]-2?a[i]:AN(0,a[i])))u)
S AX(cvg,P(n==2,A y=*a,u=a[1];P(ytil,F(gl(y),u=N(app(x,&u,1)))u)W(1,uR;A z=N2(y,u,app(y,&u,1));$(!tru(z),B)u=Ny(app(x,&u,1)))yr;u)
 P(n==1,A y=*a,z=yR,u;W(1,zR;u=N2(y,z,app(x,&z,1));$(mtc_(u,y)||mtc_(u,z),B)zr;z=u)yr;zr;u)ern(n,a))
AX(rdc,P(xtilIL,n>1?ern(n,a):K("{z+x*y}/[0;;]",xR,*a))P(xtcC,join(x,a,n))P(Ak(x)<=1,cvg(x,a,n))
 A y=n>1?n--,*a++:0,z=*a;L m=cfm(a,n);P(m==-1,y?app(x,a-1,n+1):*a)P(m<0,$(y,yr)eln(n,a))P(!m&&!y,A u=id_(x,z);mrn(n,a);u)
 $(ari(x)&&(!y||ytt)&&n==1,$(ztC,z=gL(z);P(!z,$(y,yr);0))$(y&&ytdD||ztdD,$(y,y=gD(y))z=gD(z))
  P(ztI,I*p=zi,a=!y?m--,*p++:gi(y);zr;arI(Av(x),m,I b=p[i];a=)ai(a))
  P(ztL,L*p=zl,a=!y?m--,*p++:gl(y);zr;arL(Av(x),m,L b=p[i];a=)al(a))
  P(ztD,D*p=zd,a=!y?m--,*p++:gd(y);zr;arD(Av(x),m,D b=p[i];a=)ad(a)))
 L i=!y;$(i,y=get(z,0))A b[8];W(i<m,*b=y;Fj(n,b[j+1]=get(a[j],i))y=app(x,b,n+1);$(!y,B)i++)mrn(n,a);y)
S AX(cvi,A y,z,u;$(n==1,y=0;z=*a)E$(n==2,y=*a;z=a[1])E(R ern(n,a))
 P(!y,A y0=y=zR;u=enl(yR);W(1,z=yR;y=app(x,&y,1);P(!y,zr;ur;mr(y0);0)I m=mtc_(y,z)||mtc_(y,y0);zr;$(m,B)u=apd(u,yR))mr(y0);yr;u)
 P(ytil,u=enl(zR);F(gl(y),z=Nu(app(x,&z,1));u=apd(u,zR))zr;u)
 u=enl(zR);W(1,zR;A w=app(y,&z,1);P(!w,yr;zr;ur;0)$(!tru(w),B)z=app(x,&z,1);P(!z,yr;ur;0)u=apd(u,zR))yr;zr;u)
AX(scn,P(xtilIL,enc(x,a,n))P(xtcC,spl(x,a,n))P(Ak(x)<=1,cvi(x,a,n))
 P(n==1,A z=*a;P(ztt||!zn,z)P(zta,z=mut(z);zy=scn(x,&zy,1);z)P(x==cv(','),scn(x,A_(a0(),z),2))
  $(ari(x),L n=zn-1,f=Av(x);$(ztC,z=N(gL(z)))
   P(ztL,A u=ax(z);L a=*ul=*zl;arL(f,n,L b=zl[i+1];ul[i+1]=a=)u)
   P(ztI,A u=ax(z);I a=*ui=*zi;arI(f,n,I b=zi[i+1];ui[i+1]=a=)u)
   P(ztD,A u=ax(z);D a=*ud=*zd;arD(f,n,D b=zd[i+1];ud[i+1]=a=)u))
  A y=get(z,0),u=enl(yR);L i=0,n=zn;W(++i<n,y=N(app(x,A_(y,get(z,i)),2));u=apd(u,yR))yr;zr;u)
 $(n==2,A u=a[1];P(uta,u=mut(u);uy=scn(x,A_(*a,uy),2);u)P(!un,mr(*a),u))
 A y=*a++;n--;L m=cfm(a,n);P(m==-2,yr;eln(n,a))A u=a0(),b[8];
 F(m,*b=y;Fj(n,b[j+1]=get(a[j],i))y=app(x,b,n+1);P(!y,mrn(n,a);ur;0)u=apd(u,yR))mrn(n,a);yr;u)
AX(eap,P(n==1&&xtilIL,eac(x,a,n))P(n>2,ern(n,a))A y=n==1?id_(x,*a):*a,z=a[n-1];P(!ztT,et(y,z))P(!zn,yr;z)
 $(ari(x),L f=Av(x),n=zn;P(yti&&(ztI||ztC) ,I a=gi(gI(y));z=N(gI(z));A u=ax(z);arI(f,n,I b=a;a=zii;uii=)u)
                         P(ytil&&(ztL||ztC),L a=gl(gL(y));z=N(gL(z));A u=ax(z);arL(f,n,L b=a;a=zli;uli=)u)
                         P(ytd||ztD        ,D a=gd(gD(y));z=N(gD(z));A u=ax(z);arD(f,n,D b=a;a=zdi;udi=)u))
 A u=a0();F(zn,y=app(x,A_(get(z,i),y),2);P(!y,zr;ur;0)u=apd(u,y);y=get(z,i))yr;zr;u)
AX(ear,P(n==1&&xtilIL,rdc(x,a,n))P(n-2,enn(n,a))x=prj(x,A_(*a,av_plc  ),n);dex(x,eac(x,a+1,1)))
AX(eal,P(n==1&&xtilIL,scn(x,a,n))P(n-2,enn(n,a))x=prj(x,A_(av_plc,a[1]),n);dex(x,eac(x,a  ,1)))
