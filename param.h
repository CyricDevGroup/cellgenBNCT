char *C_HL_keywords[] = {  //keywords that the mcedit will recognize
    "=","H","O","C","Li","Na","K","Rb","Cs","Fr",
	"Be","Mg","Ca","Sr","Ba","Ra","Sc","Y","Ti",
	"Zr","Hf","Rf","V","Nb","Ta","Db","Cr","Mo",
	"W","Sg","Mn","Tc","Re","Bh","Fe","Ru","Os","Hs",
	"Co","Rh","Ir","Mt","Ni","Pd","Pt","Ds","Cu","Ag",
	"Au","Rg","Zn","Cd","Hg","Cn","Ga","In","Tl","Nh",
	"B","Al","Si","Ge","Sn","Pb","Fl","N","P","As","Sb",
	"Bi","Mc","S","Se","Te","Po","Lv","F","Cl","Br","I",
	"At","Ts","He","Ne","Ar","Kr","Xe","Rn","Og","La",
	"Ce","Pr","Nd","Pm","Sm","Eu","Gd","Tb","Dy","Ho",
	"Er","Tm","Yb","Lu","Ac","Th","Pa","U","Np","Pu",
	"Am","Cm","Bk","Cf","Es","Fm","Md","No","Lr","so",
	"rpp","rcc","box","sph","rhp","hex","rec","trc",
	"ell","wed","p","px","py","pz","s","sx","sy","sz",
	"c/x","c/y","c/z","cx","cy","cz","k/x","k/y","k/z",
	"kx","ky","kz","sq","gq","tx","ty","tz","SO","RPP",
	"RCC","BOX","SPH","RHP","HEX","REC","TRC","ELL","WED",
	"P","PX","PY","PZ","S","SX","SY","SZ","C/X","C/Y",
	"C/Z","CX","CY","CZ","K/X","K/Y","K/Z","KX","KY",
	"KZ","SQ","GQ","TX","TY","TZ","icntl/", "maxcas/",
	"maxbch/","ih2o/","file/", "s-type/", "proj/", 
	"dir/","r0/", "z0/", "z1/", "e0/","mat/","title/",
	"mesh/","xmin/","xmax/","nx/","ny/","ymin/","ymax/",
	"zmin/","zmax/","nz/","e-type/","ne/","material/",
	"mother/","unit/","axis/","file/","output/","part/",
	"epsout/","sangel/","angel/","gshow/","maxbnk/",
	"timeout/","istdev/","italsh/","ireschk/","nrandgen/",
	"irskip/","rseed/","itimrand/","bitrseed/","itimrand/",
	"dmax/","emin/","esmin/","esmax/","cmin/","etsmin/",
	"etsmax/","tsmax/","negs/","nucdata/","ieleh/","ejamnu/",
	"ejampi/","eisobar/","isobar/","eqmdnu/","eqmdmin/",
	"ejamqmd/","inclg/","einclmin/","einclmax/","incelf/",
	"eielfmin/","eielfmax/","irqmd/","iscinful/","kerma/",
	"epseudo/","tmax/","wc1/","wc2/","swtm/","wupn/","wsurvn/",
	"mxspln/","mwhere/","iwwbias/","istdcut/","istdbat/",
	"ndedx/","mdbatima/","dbcutoff/","ifixchg/","irlet/",
	"ielas/","ielms/","inmed/","icxsni/","icrhi/","icrdm/",
	"icxspi/","nevap/","ngem/","ifission/","igamma/","ismm/",
	"e-mode/","em-emode/","ikerman/","ikermap/","iadjoint/",
	"andit/","iidfs/","idwba/","npidk/","emcnf/","dnb/","nonu/",
	"isaba/","emcpf/","nocoh/","ibad/","bnum/","xnum/","numb/",
	"ipegs/","imsegs/","iegsout/","iegsrand/","iedgfl/","iauger/",
	"iraylr/","lpolar/","iunrst/","chard/","epstfl/","gasegs/",
	"incohr/","iprofr/","impacr/","ieispl/","neispl/","ibrdst/",
	"iprdst/","iphter/","ibound/","iaprim/","ipnint/","pnimul/",
	"igmuppd/","gmumul/","imucap/","imuint/","imubrm/","imuppd/",
	"emumin/","emumax/","ntrnore/","nspred/","ascat1/","ascat2/",
	"nedisp/","gravx/","gravy/","gravz/","usrmgt/","usrelst/",
	"imagnf/","ielctf/","infout/","nrecover/","ierrout/","incut/",
	"igcut/","ipcut/","inpara/","igpara/","ippara/","dumpall/",
	"idpara/","itall/","iMeVperu/","itstep/","imout/","jmout/",
	"kmout/","matadd/","natural/","iggcm/","icput/","ipara/",
	"nwsors/","gsline/","icells/","ivoxel/","itetvol/","itetra/",
	"ntetsurf/","ntetelem/","itetauto/","nlost/","igerr/","igchk/",
	"ichkmat/","deltb/","idelt/","deltm/","deltc/","delt0/","deltg/",
	"deltt/","inucr/","idam/","rdam/","icommat/","sx/","sy/","sz/",
	"reg/","ntmax/","trcl/","wgt/","factor/","izst/","cnt/","ispfs/",
	"ibatch/","x0/","y0/","r1/","phi/","dom/","y1/","x1/","rn/","r2/",
	"ag1/","ag2/","pg1/","pg2/","isbias/","rx/","ry/","wem/","xmrad1/",
	"ymrad1/","x2/","y2/","xmrad2/","ymrad2/","xp/","xq/","yp/","yq/",
	"wt0/","pz0/","x3/","y3/","z3/","exa/","resfile/","factor/",
	"2d-type/","x-txt/","y-txt/","z-txt/","rshow/","ginfo/","resol/",
	"width/","volume/","reg vol/","iechrl/","volmat/","bmpout/",
	"vtkout/","vtkfmt/","foamout/","ctmin/","ctmax/","chmin/","chmax/",
	"trcl/","gslat/","stdcut/","multiplier/","t-type/","a-type/",
	"iangform/","dump/","gslat/","enclos/","letmat/","dedxfnc/",
	"deposit/","nlatmem/","dfano/","nlatcel/","z-type}","xyz}","ylin}",
	"all}","r-z}","phits.out}","dose}","z}","product.out}","nuclear}",
	"r-type}","x-type}","y-type}","proton}","neutron}","pion+}",
	"pion0}","pion-}","muon+}","muon-}","kaon+}","kaon0}","kaon-}",
	"electron}","positron}","photon}","deuteron}","triton}","alpha}",
	"nucleus}",NULL
};