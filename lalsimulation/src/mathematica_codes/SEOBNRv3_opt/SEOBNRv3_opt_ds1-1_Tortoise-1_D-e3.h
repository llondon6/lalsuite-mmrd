REAL8 tmp1=x->data[0]*x->data[0];
REAL8 tmp2=x->data[1]*x->data[1];
REAL8 tmp3=x->data[2]*x->data[2];
REAL8 tmp4=tmp1+tmp2+tmp3;
REAL8 tmp9=s1Vec->data[1]+s2Vec->data[1];
REAL8 tmp7=s1Vec->data[0]+s2Vec->data[0];
REAL8 tmp8=tmp7*tmp7;
REAL8 tmp10=tmp9*tmp9;
REAL8 tmp11=s1Vec->data[2]+s2Vec->data[2];
REAL8 tmp12=tmp11*tmp11;
REAL8 tmp13=tmp10+tmp12+tmp8;
REAL8 tmp5=(1.0/(tmp4*tmp4));
REAL8 tmp28=1/tmp4;
REAL8 tmp31=coeffs->KK*eta;
REAL8 tmp32=-1.+tmp31;
REAL8 tmp40=1./sqrt(tmp13);
REAL8 tmp41=tmp40*tmp7;
REAL8 tmp42=0.1+tmp41;
REAL8 tmp37=1./sqrt(tmp4);
REAL8 tmp46=tmp40*tmp9;
REAL8 tmp47=0.1+tmp46;
REAL8 tmp43=1/tmp13;
REAL8 tmp44=tmp12*tmp43;
REAL8 tmp45=tmp42*tmp42;
REAL8 tmp48=tmp47*tmp47;
REAL8 tmp49=tmp44+tmp45+tmp48;
REAL8 tmp50=1./sqrt(tmp49);
REAL8 tmp20=pow(tmp4,-2.5);
REAL8 tmp59=tmp13*tmp13;
REAL8 tmp26=(1.0/sqrt(tmp4*tmp4*tmp4));
REAL8 tmp33=(1.0/(tmp32*tmp32));
REAL8 tmp34=1.*tmp33;
REAL8 tmp35=1.*tmp13*tmp28;
REAL8 tmp36=1/tmp32;
REAL8 tmp38=2.*tmp36*tmp37;
REAL8 tmp39=tmp34+tmp35+tmp38;
REAL8 tmp85=(1.0/sqrt(tmp13*tmp13*tmp13));
REAL8 tmp83=(1.0/(tmp13*tmp13));
REAL8 tmp84=-2.*tmp12*tmp83*tmp9;
REAL8 tmp86=-2.*tmp42*tmp7*tmp85*tmp9;
REAL8 tmp87=-(tmp10*tmp85);
REAL8 tmp88=tmp40+tmp87;
REAL8 tmp89=2.*tmp47*tmp88;
REAL8 tmp90=tmp84+tmp86+tmp89;
REAL8 tmp91=(1.0/sqrt(tmp49*tmp49*tmp49));
REAL8 tmp51=1.*tmp37*tmp42*tmp50*x->data[0];
REAL8 tmp52=1.*tmp37*tmp47*tmp50*x->data[1];
REAL8 tmp53=1.*tmp11*tmp37*tmp40*tmp50*x->data[2];
REAL8 tmp54=tmp51+tmp52+tmp53;
REAL8 tmp73=-1.+m1PlusEtaKK;
REAL8 tmp58=c1k5*tmp13;
REAL8 tmp60=c2k5*tmp59;
REAL8 tmp61=c0k5+tmp58+tmp60;
REAL8 tmp62=1.*tmp20*tmp61;
REAL8 tmp63=c1k4*tmp13;
REAL8 tmp64=c2k4*tmp59;
REAL8 tmp65=c0k4+tmp63+tmp64;
REAL8 tmp66=1.*tmp5*tmp65;
REAL8 tmp67=c1k3*tmp13;
REAL8 tmp68=c0k3+tmp67;
REAL8 tmp69=1.*tmp26*tmp68;
REAL8 tmp70=c1k2*tmp13;
REAL8 tmp71=c0k2+tmp70;
REAL8 tmp72=1.*tmp28*tmp71;
REAL8 tmp74=coeffs->KK*tmp73;
REAL8 tmp75=coeffs->KK+tmp74;
REAL8 tmp76=-2.*m1PlusEtaKK*tmp37*tmp75;
REAL8 tmp77=1.*tmp37;
REAL8 tmp78=log(tmp77);
REAL8 tmp79=1.*coeffs->k5l*tmp20*tmp78;
REAL8 tmp80=1.+tmp62+tmp66+tmp69+tmp72+tmp76+tmp79;
REAL8 tmp55=tmp54*tmp54;
REAL8 tmp56=-tmp55;
REAL8 tmp57=1.+tmp56;
REAL8 tmp99=coeffs->KK*eta*tmp73;
REAL8 tmp100=log(tmp80);
REAL8 tmp101=eta*tmp100;
REAL8 tmp102=1.+tmp101+tmp99;
REAL8 tmp15=tmp1+tmp10+tmp12+tmp2+tmp3+tmp8;
REAL8 tmp118=tmp4*tmp4;
REAL8 tmp119=tmp39*tmp39;
REAL8 tmp120=-3.*eta;
REAL8 tmp121=26.+tmp120;
REAL8 tmp122=2.*eta*tmp121*tmp26;
REAL8 tmp123=6.*eta*tmp28;
REAL8 tmp124=1.+tmp122+tmp123;
REAL8 tmp125=log(tmp124);
REAL8 tmp126=1.+tmp125;
REAL8 tmp127=tmp102*tmp102;
REAL8 tmp128=tmp118*tmp119*tmp126*tmp127;
REAL8 tmp114=p->data[0]*tmp37*x->data[0];
REAL8 tmp115=p->data[1]*tmp37*x->data[1];
REAL8 tmp116=p->data[2]*tmp37*x->data[2];
REAL8 tmp117=tmp114+tmp115+tmp116;
REAL8 tmp129=1./sqrt(tmp128);
REAL8 tmp130=1/tmp15;
REAL8 tmp131=sqrt(tmp128);
REAL8 tmp132=tmp130*tmp131;
REAL8 tmp133=-1.+tmp132;
REAL8 tmp107=tmp15*tmp15;
REAL8 tmp108=-(tmp102*tmp13*tmp39*tmp4*tmp57);
REAL8 tmp109=tmp107+tmp108;
REAL8 tmp111=-(tmp11*tmp37*tmp40*tmp50*x->data[1]);
REAL8 tmp112=1.*tmp37*tmp47*tmp50*x->data[2];
REAL8 tmp113=tmp111+tmp112;
REAL8 tmp134=-(tmp117*tmp129*tmp133*tmp15*tmp37*x->data[0]);
REAL8 tmp135=p->data[0]+tmp134;
REAL8 tmp136=tmp113*tmp135;
REAL8 tmp137=1.*tmp11*tmp37*tmp40*tmp50*x->data[0];
REAL8 tmp138=-(tmp37*tmp42*tmp50*x->data[2]);
REAL8 tmp139=tmp137+tmp138;
REAL8 tmp140=-(tmp117*tmp129*tmp133*tmp15*tmp37*x->data[1]);
REAL8 tmp141=p->data[1]+tmp140;
REAL8 tmp142=tmp139*tmp141;
REAL8 tmp143=-(tmp37*tmp47*tmp50*x->data[0]);
REAL8 tmp144=1.*tmp37*tmp42*tmp50*x->data[1];
REAL8 tmp145=tmp143+tmp144;
REAL8 tmp146=-(tmp117*tmp129*tmp133*tmp15*tmp37*x->data[2]);
REAL8 tmp147=p->data[2]+tmp146;
REAL8 tmp148=tmp145*tmp147;
REAL8 tmp149=tmp136+tmp142+tmp148;
REAL8 tmp14=sqrt(tmp13);
REAL8 tmp151=1/tmp109;
REAL8 tmp17=2.*c1k5*tmp9;
REAL8 tmp18=4.*c2k5*tmp13*tmp9;
REAL8 tmp19=tmp17+tmp18;
REAL8 tmp21=1.*tmp19*tmp20;
REAL8 tmp22=2.*c1k4*tmp9;
REAL8 tmp23=4.*c2k4*tmp13*tmp9;
REAL8 tmp24=tmp22+tmp23;
REAL8 tmp25=1.*tmp24*tmp5;
REAL8 tmp27=2.*c1k3*tmp26*tmp9;
REAL8 tmp29=2.*c1k2*tmp28*tmp9;
REAL8 tmp30=tmp21+tmp25+tmp27+tmp29;
REAL8 tmp81=1/tmp80;
REAL8 tmp173=2.*eta*tmp102*tmp118*tmp119*tmp126*tmp30*tmp81;
REAL8 tmp174=4.*tmp126*tmp127*tmp39*tmp4*tmp9;
REAL8 tmp175=tmp173+tmp174;
REAL8 tmp172=(1.0/sqrt(tmp128*tmp128*tmp128));
REAL8 tmp177=(1.0/(tmp15*tmp15));
REAL8 tmp178=-2.*tmp131*tmp177*tmp9;
REAL8 tmp179=0.5*tmp129*tmp130*tmp175;
REAL8 tmp180=tmp178+tmp179;
REAL8 tmp196=1/tmp39;
REAL8 tmp197=tmp13*tmp55;
REAL8 tmp198=tmp1+tmp197+tmp2+tmp3;
REAL8 tmp199=1/tmp198;
REAL8 tmp200=1/tmp102;
REAL8 tmp16=4.*tmp15*tmp9;
REAL8 tmp82=-(eta*tmp13*tmp30*tmp39*tmp4*tmp57*tmp81);
REAL8 tmp92=-0.5*tmp37*tmp42*tmp90*tmp91*x->data[0];
REAL8 tmp93=-(tmp37*tmp50*tmp7*tmp85*tmp9*x->data[0]);
REAL8 tmp94=-0.5*tmp37*tmp47*tmp90*tmp91*x->data[1];
REAL8 tmp95=1.*tmp37*tmp50*tmp88*x->data[1];
REAL8 tmp96=-0.5*tmp11*tmp37*tmp40*tmp90*tmp91*x->data[2];
REAL8 tmp97=-(tmp11*tmp37*tmp50*tmp85*tmp9*x->data[2]);
REAL8 tmp98=tmp92+tmp93+tmp94+tmp95+tmp96+tmp97;
REAL8 tmp103=2.*tmp102*tmp13*tmp39*tmp4*tmp54*tmp98;
REAL8 tmp104=-2.*tmp102*tmp13*tmp57*tmp9;
REAL8 tmp105=-2.*tmp102*tmp39*tmp4*tmp57*tmp9;
REAL8 tmp106=tmp103+tmp104+tmp105+tmp16+tmp82;
REAL8 tmp223=1/tmp57;
REAL8 tmp201=tmp109*tmp196*tmp199*tmp200*tmp28;
REAL8 tmp214=4.+tmp120;
REAL8 tmp215=(tmp117*tmp117*tmp117*tmp117);
REAL8 tmp216=2.*eta*tmp214*tmp215*tmp28;
REAL8 tmp217=tmp135*tmp37*x->data[0];
REAL8 tmp218=tmp141*tmp37*x->data[1];
REAL8 tmp219=tmp147*tmp37*x->data[2];
REAL8 tmp220=tmp217+tmp218+tmp219;
REAL8 tmp221=tmp220*tmp220;
REAL8 tmp222=tmp102*tmp126*tmp199*tmp221*tmp39*tmp4;
REAL8 tmp224=tmp149*tmp149;
REAL8 tmp225=tmp151*tmp198*tmp223*tmp224*tmp4;
REAL8 tmp226=tmp145*tmp37*x->data[1];
REAL8 tmp227=-(tmp139*tmp37*x->data[2]);
REAL8 tmp228=tmp226+tmp227;
REAL8 tmp229=tmp135*tmp228;
REAL8 tmp230=-(tmp145*tmp37*x->data[0]);
REAL8 tmp231=tmp113*tmp37*x->data[2];
REAL8 tmp232=tmp230+tmp231;
REAL8 tmp233=tmp141*tmp232;
REAL8 tmp234=tmp139*tmp37*x->data[0];
REAL8 tmp235=-(tmp113*tmp37*x->data[1]);
REAL8 tmp236=tmp234+tmp235;
REAL8 tmp237=tmp147*tmp236;
REAL8 tmp238=tmp229+tmp233+tmp237;
REAL8 tmp239=tmp238*tmp238;
REAL8 tmp240=tmp199*tmp223*tmp239*tmp4;
REAL8 tmp241=1.+tmp216+tmp222+tmp225+tmp240;
REAL8 tmp206=2.*tmp13*tmp54*tmp98;
REAL8 tmp207=2.*tmp55*tmp9;
REAL8 tmp208=tmp206+tmp207;
REAL8 tmp209=(1.0/(tmp198*tmp198));
REAL8 tmp110=(1.0/(tmp109*tmp109));
REAL8 tmp251=(1.0/(tmp57*tmp57));
REAL8 tmp171=-2.*tmp117*tmp129*tmp133*tmp37*tmp9*x->data[0];
REAL8 tmp176=0.5*tmp117*tmp133*tmp15*tmp172*tmp175*tmp37*x->data[0];
REAL8 tmp181=-(tmp117*tmp129*tmp15*tmp180*tmp37*x->data[0]);
REAL8 tmp182=tmp171+tmp176+tmp181;
REAL8 tmp184=-2.*tmp117*tmp129*tmp133*tmp37*tmp9*x->data[1];
REAL8 tmp185=0.5*tmp117*tmp133*tmp15*tmp172*tmp175*tmp37*x->data[1];
REAL8 tmp186=-(tmp117*tmp129*tmp15*tmp180*tmp37*x->data[1]);
REAL8 tmp187=tmp184+tmp185+tmp186;
REAL8 tmp189=-2.*tmp117*tmp129*tmp133*tmp37*tmp9*x->data[2];
REAL8 tmp190=0.5*tmp117*tmp133*tmp15*tmp172*tmp175*tmp37*x->data[2];
REAL8 tmp191=-(tmp117*tmp129*tmp15*tmp180*tmp37*x->data[2]);
REAL8 tmp192=tmp189+tmp190+tmp191;
REAL8 tmp153=0.5*tmp11*tmp37*tmp40*tmp90*tmp91*x->data[1];
REAL8 tmp154=1.*tmp11*tmp37*tmp50*tmp85*tmp9*x->data[1];
REAL8 tmp155=-0.5*tmp37*tmp47*tmp90*tmp91*x->data[2];
REAL8 tmp156=1.*tmp37*tmp50*tmp88*x->data[2];
REAL8 tmp157=tmp153+tmp154+tmp155+tmp156;
REAL8 tmp158=tmp135*tmp157;
REAL8 tmp159=-0.5*tmp11*tmp37*tmp40*tmp90*tmp91*x->data[0];
REAL8 tmp160=-(tmp11*tmp37*tmp50*tmp85*tmp9*x->data[0]);
REAL8 tmp161=0.5*tmp37*tmp42*tmp90*tmp91*x->data[2];
REAL8 tmp162=1.*tmp37*tmp50*tmp7*tmp85*tmp9*x->data[2];
REAL8 tmp163=tmp159+tmp160+tmp161+tmp162;
REAL8 tmp164=tmp141*tmp163;
REAL8 tmp165=0.5*tmp37*tmp47*tmp90*tmp91*x->data[0];
REAL8 tmp166=-(tmp37*tmp50*tmp88*x->data[0]);
REAL8 tmp167=-0.5*tmp37*tmp42*tmp90*tmp91*x->data[1];
REAL8 tmp168=-(tmp37*tmp50*tmp7*tmp85*tmp9*x->data[1]);
REAL8 tmp169=tmp165+tmp166+tmp167+tmp168;
REAL8 tmp170=tmp147*tmp169;
REAL8 tmp183=tmp113*tmp182;
REAL8 tmp188=tmp139*tmp187;
REAL8 tmp193=tmp145*tmp192;
REAL8 tmp194=tmp158+tmp164+tmp170+tmp183+tmp188+tmp193;
REAL8 tmp281=1/mass1;
REAL8 tmp282=mass2*s1Vec->data[0]*tmp281;
REAL8 tmp283=1/mass2;
REAL8 tmp284=mass1*s2Vec->data[0]*tmp283;
REAL8 tmp287=tmp282+tmp284;
REAL8 tmp289=sqrt(tmp4*tmp4*tmp4);
REAL8 tmp280=sqrt(tmp4);
REAL8 tmp292=0.+tmp222+tmp225+tmp240;
REAL8 tmp300=eta*eta;
REAL8 tmp309=3.*eta;
REAL8 tmp301=(tmp4*tmp4*tmp4);
REAL8 tmp302=tmp126*tmp126;
REAL8 tmp303=(tmp220*tmp220*tmp220*tmp220);
REAL8 tmp311=tmp292*tmp292;
REAL8 tmp343=mass2*s1Vec->data[1]*tmp281;
REAL8 tmp344=mass1*s2Vec->data[1]*tmp283;
REAL8 tmp347=tmp343+tmp344;
REAL8 tmp297=27.*eta;
REAL8 tmp298=-353.+tmp297;
REAL8 tmp299=2.*eta*tmp298;
REAL8 tmp304=-360.*tmp119*tmp127*tmp209*tmp300*tmp301*tmp302*tmp303;
REAL8 tmp305=103.*eta;
REAL8 tmp306=-60.*tmp300;
REAL8 tmp307=tmp305+tmp306;
REAL8 tmp308=2.*tmp280*tmp292*tmp307;
REAL8 tmp310=23.+tmp309;
REAL8 tmp312=eta*tmp310*tmp311*tmp4;
REAL8 tmp313=-47.*eta;
REAL8 tmp314=54.*tmp300;
REAL8 tmp315=-16.*eta;
REAL8 tmp316=21.*tmp300;
REAL8 tmp317=tmp315+tmp316;
REAL8 tmp318=tmp280*tmp292*tmp317;
REAL8 tmp319=tmp313+tmp314+tmp318;
REAL8 tmp320=6.*tmp102*tmp126*tmp199*tmp221*tmp289*tmp319*tmp39;
REAL8 tmp321=tmp299+tmp304+tmp308+tmp312+tmp320;
REAL8 tmp323=8.+tmp309;
REAL8 tmp324=-112.*eta*tmp323;
REAL8 tmp325=810.*tmp119*tmp127*tmp209*tmp300*tmp301*tmp302*tmp303;
REAL8 tmp326=-109.*eta;
REAL8 tmp327=51.*tmp300;
REAL8 tmp328=tmp326+tmp327;
REAL8 tmp329=4.*tmp280*tmp292*tmp328;
REAL8 tmp330=-45.*eta*tmp311*tmp4;
REAL8 tmp331=16.*eta;
REAL8 tmp332=147.*tmp300;
REAL8 tmp333=-6.*eta;
REAL8 tmp334=39.*tmp300;
REAL8 tmp335=tmp333+tmp334;
REAL8 tmp336=tmp280*tmp292*tmp335;
REAL8 tmp337=tmp331+tmp332+tmp336;
REAL8 tmp338=-6.*tmp102*tmp126*tmp199*tmp221*tmp289*tmp337*tmp39;
REAL8 tmp339=tmp324+tmp325+tmp329+tmp330+tmp338;
REAL8 tmp359=mass2*s1Vec->data[2]*tmp281;
REAL8 tmp360=mass1*s2Vec->data[2]*tmp283;
REAL8 tmp363=tmp359+tmp360;
REAL8 tmp285=coeffs->d1v2*eta*tmp26*tmp7;
REAL8 tmp286=-8.*tmp7;
REAL8 tmp288=14.*tmp287;
REAL8 tmp290=-36.*tmp102*tmp126*tmp199*tmp221*tmp289*tmp39*tmp7;
REAL8 tmp291=-30.*tmp102*tmp126*tmp199*tmp221*tmp287*tmp289*tmp39;
REAL8 tmp293=3.*tmp280*tmp292*tmp7;
REAL8 tmp294=4.*tmp280*tmp287*tmp292;
REAL8 tmp295=tmp286+tmp288+tmp290+tmp291+tmp293+tmp294;
REAL8 tmp296=0.08333333333333333*eta*tmp295*tmp37;
REAL8 tmp322=-0.013888888888888888*tmp28*tmp287*tmp321;
REAL8 tmp340=0.006944444444444444*tmp28*tmp339*tmp7;
REAL8 tmp341=tmp282+tmp284+tmp285+tmp296+tmp322+tmp340;
REAL8 tmp342=1.*tmp341*tmp42*tmp50;
REAL8 tmp345=coeffs->d1v2*eta*tmp26*tmp9;
REAL8 tmp346=-8.*tmp9;
REAL8 tmp348=14.*tmp347;
REAL8 tmp349=-36.*tmp102*tmp126*tmp199*tmp221*tmp289*tmp39*tmp9;
REAL8 tmp350=-30.*tmp102*tmp126*tmp199*tmp221*tmp289*tmp347*tmp39;
REAL8 tmp351=3.*tmp280*tmp292*tmp9;
REAL8 tmp352=4.*tmp280*tmp292*tmp347;
REAL8 tmp353=tmp346+tmp348+tmp349+tmp350+tmp351+tmp352;
REAL8 tmp354=0.08333333333333333*eta*tmp353*tmp37;
REAL8 tmp355=-0.013888888888888888*tmp28*tmp321*tmp347;
REAL8 tmp356=0.006944444444444444*tmp28*tmp339*tmp9;
REAL8 tmp357=tmp343+tmp344+tmp345+tmp354+tmp355+tmp356;
REAL8 tmp358=1.*tmp357*tmp47*tmp50;
REAL8 tmp361=coeffs->d1v2*eta*tmp11*tmp26;
REAL8 tmp362=-8.*tmp11;
REAL8 tmp364=14.*tmp363;
REAL8 tmp365=-36.*tmp102*tmp11*tmp126*tmp199*tmp221*tmp289*tmp39;
REAL8 tmp366=-30.*tmp102*tmp126*tmp199*tmp221*tmp289*tmp363*tmp39;
REAL8 tmp367=3.*tmp11*tmp280*tmp292;
REAL8 tmp368=4.*tmp280*tmp292*tmp363;
REAL8 tmp369=tmp362+tmp364+tmp365+tmp366+tmp367+tmp368;
REAL8 tmp370=0.08333333333333333*eta*tmp369*tmp37;
REAL8 tmp371=-0.013888888888888888*tmp28*tmp321*tmp363;
REAL8 tmp372=0.006944444444444444*tmp11*tmp28*tmp339;
REAL8 tmp373=tmp359+tmp360+tmp361+tmp370+tmp371+tmp372;
REAL8 tmp374=1.*tmp11*tmp373*tmp40*tmp50;
REAL8 tmp375=tmp342+tmp358+tmp374;
REAL8 tmp378=sqrt(tmp198);
REAL8 tmp379=tmp102*tmp39*tmp4;
REAL8 tmp380=sqrt(tmp379);
REAL8 tmp381=-tmp380;
REAL8 tmp382=tmp102*tmp151*tmp198*tmp39*tmp4;
REAL8 tmp383=sqrt(tmp382);
REAL8 tmp384=tmp378*tmp383;
REAL8 tmp385=tmp381+tmp384;
REAL8 tmp386=1.+tmp222+tmp225+tmp240;
REAL8 tmp387=1./sqrt(tmp386);
REAL8 tmp389=1./sqrt(tmp198);
REAL8 tmp246=eta*tmp126*tmp199*tmp221*tmp30*tmp39*tmp4*tmp81;
REAL8 tmp247=-(tmp102*tmp126*tmp208*tmp209*tmp221*tmp39*tmp4);
REAL8 tmp248=2.*tmp102*tmp126*tmp199*tmp221*tmp9;
REAL8 tmp249=-(tmp106*tmp110*tmp198*tmp223*tmp224*tmp4);
REAL8 tmp250=tmp151*tmp208*tmp223*tmp224*tmp4;
REAL8 tmp252=2.*tmp151*tmp198*tmp224*tmp251*tmp4*tmp54*tmp98;
REAL8 tmp253=-(tmp208*tmp209*tmp223*tmp239*tmp4);
REAL8 tmp254=2.*tmp199*tmp239*tmp251*tmp4*tmp54*tmp98;
REAL8 tmp255=tmp182*tmp37*x->data[0];
REAL8 tmp256=tmp187*tmp37*x->data[1];
REAL8 tmp257=tmp192*tmp37*x->data[2];
REAL8 tmp258=tmp255+tmp256+tmp257;
REAL8 tmp259=2.*tmp102*tmp126*tmp199*tmp220*tmp258*tmp39*tmp4;
REAL8 tmp260=2.*tmp149*tmp151*tmp194*tmp198*tmp223*tmp4;
REAL8 tmp261=tmp169*tmp37*x->data[1];
REAL8 tmp262=-(tmp163*tmp37*x->data[2]);
REAL8 tmp263=tmp261+tmp262;
REAL8 tmp264=tmp135*tmp263;
REAL8 tmp265=-(tmp169*tmp37*x->data[0]);
REAL8 tmp266=tmp157*tmp37*x->data[2];
REAL8 tmp267=tmp265+tmp266;
REAL8 tmp268=tmp141*tmp267;
REAL8 tmp269=tmp163*tmp37*x->data[0];
REAL8 tmp270=-(tmp157*tmp37*x->data[1]);
REAL8 tmp271=tmp269+tmp270;
REAL8 tmp272=tmp147*tmp271;
REAL8 tmp273=tmp182*tmp228;
REAL8 tmp274=tmp187*tmp232;
REAL8 tmp275=tmp192*tmp236;
REAL8 tmp276=tmp264+tmp268+tmp272+tmp273+tmp274+tmp275;
REAL8 tmp277=2.*tmp199*tmp223*tmp238*tmp276*tmp4;
REAL8 tmp278=tmp246+tmp247+tmp248+tmp249+tmp250+tmp252+tmp253+tmp254+tmp259+tmp260+tmp277;
REAL8 tmp428=(eta*eta*eta);
REAL8 tmp430=1./(tmp198*tmp198*tmp198);
REAL8 tmp433=(tmp220*tmp220*tmp220);
REAL8 tmp429=-720.*tmp102*tmp119*tmp209*tmp30*tmp301*tmp302*tmp303*tmp428*tmp81;
REAL8 tmp431=720.*tmp119*tmp127*tmp208*tmp300*tmp301*tmp302*tmp303*tmp430;
REAL8 tmp432=-1440.*tmp118*tmp127*tmp209*tmp300*tmp302*tmp303*tmp39*tmp9;
REAL8 tmp434=-1440.*tmp119*tmp127*tmp209*tmp258*tmp300*tmp301*tmp302*tmp433;
REAL8 tmp435=2.*tmp278*tmp280*tmp307;
REAL8 tmp436=6.*tmp102*tmp118*tmp126*tmp199*tmp221*tmp278*tmp317*tmp39;
REAL8 tmp437=2.*eta*tmp278*tmp292*tmp310*tmp4;
REAL8 tmp438=6.*eta*tmp126*tmp199*tmp221*tmp289*tmp30*tmp319*tmp39*tmp81;
REAL8 tmp439=-6.*tmp102*tmp126*tmp208*tmp209*tmp221*tmp289*tmp319*tmp39;
REAL8 tmp440=12.*tmp102*tmp126*tmp199*tmp221*tmp280*tmp319*tmp9;
REAL8 tmp441=12.*tmp102*tmp126*tmp199*tmp220*tmp258*tmp289*tmp319*tmp39;
REAL8 tmp442=tmp429+tmp431+tmp432+tmp434+tmp435+tmp436+tmp437+tmp438+tmp439+tmp440+tmp441;
REAL8 tmp444=1620.*tmp102*tmp119*tmp209*tmp30*tmp301*tmp302*tmp303*tmp428*tmp81;
REAL8 tmp445=-1620.*tmp119*tmp127*tmp208*tmp300*tmp301*tmp302*tmp303*tmp430;
REAL8 tmp446=3240.*tmp118*tmp127*tmp209*tmp300*tmp302*tmp303*tmp39*tmp9;
REAL8 tmp447=3240.*tmp119*tmp127*tmp209*tmp258*tmp300*tmp301*tmp302*tmp433;
REAL8 tmp448=4.*tmp278*tmp280*tmp328;
REAL8 tmp449=-6.*tmp102*tmp118*tmp126*tmp199*tmp221*tmp278*tmp335*tmp39;
REAL8 tmp450=-90.*eta*tmp278*tmp292*tmp4;
REAL8 tmp451=-6.*eta*tmp126*tmp199*tmp221*tmp289*tmp30*tmp337*tmp39*tmp81;
REAL8 tmp452=6.*tmp102*tmp126*tmp208*tmp209*tmp221*tmp289*tmp337*tmp39;
REAL8 tmp453=-12.*tmp102*tmp126*tmp199*tmp221*tmp280*tmp337*tmp9;
REAL8 tmp454=-12.*tmp102*tmp126*tmp199*tmp220*tmp258*tmp289*tmp337*tmp39;
REAL8 tmp455=tmp444+tmp445+tmp446+tmp447+tmp448+tmp449+tmp450+tmp451+tmp452+tmp453+tmp454;
REAL8 tmp410=-0.5*tmp341*tmp42*tmp90*tmp91;
REAL8 tmp411=-(tmp341*tmp50*tmp7*tmp85*tmp9);
REAL8 tmp412=-0.5*tmp357*tmp47*tmp90*tmp91;
REAL8 tmp413=1.*tmp357*tmp50*tmp88;
REAL8 tmp414=-0.5*tmp11*tmp373*tmp40*tmp90*tmp91;
REAL8 tmp415=-(tmp11*tmp373*tmp50*tmp85*tmp9);
REAL8 tmp416=-36.*eta*tmp126*tmp199*tmp221*tmp289*tmp30*tmp39*tmp7*tmp81;
REAL8 tmp417=-30.*eta*tmp126*tmp199*tmp221*tmp287*tmp289*tmp30*tmp39*tmp81;
REAL8 tmp418=36.*tmp102*tmp126*tmp208*tmp209*tmp221*tmp289*tmp39*tmp7;
REAL8 tmp419=30.*tmp102*tmp126*tmp208*tmp209*tmp221*tmp287*tmp289*tmp39;
REAL8 tmp420=-72.*tmp102*tmp126*tmp199*tmp221*tmp280*tmp7*tmp9;
REAL8 tmp421=-60.*tmp102*tmp126*tmp199*tmp221*tmp280*tmp287*tmp9;
REAL8 tmp422=-72.*tmp102*tmp126*tmp199*tmp220*tmp258*tmp289*tmp39*tmp7;
REAL8 tmp423=-60.*tmp102*tmp126*tmp199*tmp220*tmp258*tmp287*tmp289*tmp39;
REAL8 tmp424=3.*tmp278*tmp280*tmp7;
REAL8 tmp425=4.*tmp278*tmp280*tmp287;
REAL8 tmp426=tmp416+tmp417+tmp418+tmp419+tmp420+tmp421+tmp422+tmp423+tmp424+tmp425;
REAL8 tmp427=0.08333333333333333*eta*tmp37*tmp426;
REAL8 tmp443=-0.013888888888888888*tmp28*tmp287*tmp442;
REAL8 tmp456=0.006944444444444444*tmp28*tmp455*tmp7;
REAL8 tmp457=tmp427+tmp443+tmp456;
REAL8 tmp458=1.*tmp42*tmp457*tmp50;
REAL8 tmp459=mass2*tmp281;
REAL8 tmp460=coeffs->d1v2*eta*tmp26;
REAL8 tmp461=14.*mass2*tmp281;
REAL8 tmp462=-36.*eta*tmp126*tmp199*tmp221*tmp289*tmp30*tmp39*tmp81*tmp9;
REAL8 tmp463=-30.*eta*tmp126*tmp199*tmp221*tmp289*tmp30*tmp347*tmp39*tmp81;
REAL8 tmp464=36.*tmp102*tmp126*tmp208*tmp209*tmp221*tmp289*tmp39*tmp9;
REAL8 tmp465=30.*tmp102*tmp126*tmp208*tmp209*tmp221*tmp289*tmp347*tmp39;
REAL8 tmp466=-72.*tmp10*tmp102*tmp126*tmp199*tmp221*tmp280;
REAL8 tmp467=-60.*tmp102*tmp126*tmp199*tmp221*tmp280*tmp347*tmp9;
REAL8 tmp468=-36.*tmp102*tmp126*tmp199*tmp221*tmp289*tmp39;
REAL8 tmp469=-30.*mass2*tmp102*tmp126*tmp199*tmp221*tmp281*tmp289*tmp39;
REAL8 tmp470=-72.*tmp102*tmp126*tmp199*tmp220*tmp258*tmp289*tmp39*tmp9;
REAL8 tmp471=-60.*tmp102*tmp126*tmp199*tmp220*tmp258*tmp289*tmp347*tmp39;
REAL8 tmp472=3.*tmp280*tmp292;
REAL8 tmp473=4.*mass2*tmp280*tmp281*tmp292;
REAL8 tmp474=3.*tmp278*tmp280*tmp9;
REAL8 tmp475=4.*tmp278*tmp280*tmp347;
REAL8 tmp476=-8.+tmp461+tmp462+tmp463+tmp464+tmp465+tmp466+tmp467+tmp468+tmp469+tmp470+tmp471+tmp472+tmp473+tmp474+tmp475;
REAL8 tmp477=0.08333333333333333*eta*tmp37*tmp476;
REAL8 tmp478=-0.013888888888888888*mass2*tmp28*tmp281*tmp321;
REAL8 tmp479=-0.013888888888888888*tmp28*tmp347*tmp442;
REAL8 tmp480=0.006944444444444444*tmp28*tmp339;
REAL8 tmp481=0.006944444444444444*tmp28*tmp455*tmp9;
REAL8 tmp482=tmp459+tmp460+tmp477+tmp478+tmp479+tmp480+tmp481;
REAL8 tmp483=1.*tmp47*tmp482*tmp50;
REAL8 tmp484=-36.*eta*tmp11*tmp126*tmp199*tmp221*tmp289*tmp30*tmp39*tmp81;
REAL8 tmp485=-30.*eta*tmp126*tmp199*tmp221*tmp289*tmp30*tmp363*tmp39*tmp81;
REAL8 tmp486=36.*tmp102*tmp11*tmp126*tmp208*tmp209*tmp221*tmp289*tmp39;
REAL8 tmp487=30.*tmp102*tmp126*tmp208*tmp209*tmp221*tmp289*tmp363*tmp39;
REAL8 tmp488=-72.*tmp102*tmp11*tmp126*tmp199*tmp221*tmp280*tmp9;
REAL8 tmp489=-60.*tmp102*tmp126*tmp199*tmp221*tmp280*tmp363*tmp9;
REAL8 tmp490=-72.*tmp102*tmp11*tmp126*tmp199*tmp220*tmp258*tmp289*tmp39;
REAL8 tmp491=-60.*tmp102*tmp126*tmp199*tmp220*tmp258*tmp289*tmp363*tmp39;
REAL8 tmp492=3.*tmp11*tmp278*tmp280;
REAL8 tmp493=4.*tmp278*tmp280*tmp363;
REAL8 tmp494=tmp484+tmp485+tmp486+tmp487+tmp488+tmp489+tmp490+tmp491+tmp492+tmp493;
REAL8 tmp495=0.08333333333333333*eta*tmp37*tmp494;
REAL8 tmp496=-0.013888888888888888*tmp28*tmp363*tmp442;
REAL8 tmp497=0.006944444444444444*tmp11*tmp28*tmp455;
REAL8 tmp498=tmp495+tmp496+tmp497;
REAL8 tmp499=1.*tmp11*tmp40*tmp498*tmp50;
REAL8 tmp500=tmp410+tmp411+tmp412+tmp413+tmp414+tmp415+tmp458+tmp483+tmp499;
REAL8 tmp392=1./sqrt(tmp379);
REAL8 tmp398=1./sqrt(tmp382);
REAL8 tmp520=sqrt(tmp386);
REAL8 tmp506=tmp341*tmp37*x->data[0];
REAL8 tmp507=tmp357*tmp37*x->data[1];
REAL8 tmp508=tmp37*tmp373*x->data[2];
REAL8 tmp509=tmp506+tmp507+tmp508;
REAL8 tmp517=sqrt(tmp13*tmp13*tmp13);
REAL8 tmp518=(1.0/sqrt(tmp198*tmp198*tmp198));
REAL8 tmp521=1.+tmp520;
REAL8 tmp523=tmp198*tmp198;
REAL8 tmp524=-(tmp102*tmp118*tmp151*tmp224*tmp39*tmp523);
REAL8 tmp525=tmp239*tmp4;
REAL8 tmp526=1.+tmp222+tmp225+tmp240+tmp520;
REAL8 tmp527=-(tmp198*tmp526*tmp57);
REAL8 tmp528=tmp525+tmp527;
REAL8 tmp529=tmp102*tmp39*tmp4*tmp528;
REAL8 tmp530=tmp524+tmp529;
REAL8 tmp531=tmp509*tmp530;
REAL8 tmp532=tmp102*tmp126*tmp39*tmp4;
REAL8 tmp533=sqrt(tmp532);
REAL8 tmp534=tmp113*tmp341;
REAL8 tmp535=tmp139*tmp357;
REAL8 tmp536=tmp145*tmp373;
REAL8 tmp537=tmp534+tmp535+tmp536;
REAL8 tmp538=-(tmp149*tmp280*tmp378*tmp383*tmp537);
REAL8 tmp539=tmp228*tmp341;
REAL8 tmp540=tmp232*tmp357;
REAL8 tmp541=tmp236*tmp373;
REAL8 tmp542=tmp539+tmp540+tmp541;
REAL8 tmp543=tmp238*tmp280*tmp380*tmp542;
REAL8 tmp544=tmp538+tmp543;
REAL8 tmp545=-(tmp220*tmp380*tmp533*tmp544);
REAL8 tmp546=tmp531+tmp545;
REAL8 tmp549=1/tmp521;
REAL8 tmp393=eta*tmp30*tmp39*tmp4*tmp81;
REAL8 tmp394=2.*tmp102*tmp9;
REAL8 tmp395=tmp393+tmp394;
REAL8 tmp399=-(tmp102*tmp106*tmp110*tmp198*tmp39*tmp4);
REAL8 tmp400=eta*tmp151*tmp198*tmp30*tmp39*tmp4*tmp81;
REAL8 tmp401=tmp102*tmp151*tmp208*tmp39*tmp4;
REAL8 tmp402=2.*tmp102*tmp151*tmp198*tmp9;
REAL8 tmp403=tmp399+tmp400+tmp401+tmp402;
REAL8 tmp408=(1.0/sqrt(tmp386*tmp386*tmp386));
REAL8 tmp564=coeffs->k5l*tmp78;
REAL8 tmp565=c0k5+tmp564+tmp58+tmp60;
REAL8 tmp519=1/tmp386;
REAL8 tmp522=(1.0/(tmp521*tmp521));
REAL8 tmp583=1.*tmp36;
REAL8 tmp584=1.*tmp13*tmp37;
REAL8 tmp585=tmp583+tmp584;
REAL8 tmp566=1.*tmp20*tmp565;
REAL8 tmp567=1.+tmp566+tmp66+tmp69+tmp72+tmp76;
REAL8 tmp568=1/tmp567;
REAL8 tmp569=-2.*m1PlusEtaKK*tmp75;
REAL8 tmp570=2.*tmp71;
REAL8 tmp571=3.*tmp68;
REAL8 tmp572=4.*tmp65;
REAL8 tmp573=5.*tmp37*tmp565;
REAL8 tmp574=tmp572+tmp573;
REAL8 tmp575=1.*tmp37*tmp574;
REAL8 tmp576=tmp571+tmp575;
REAL8 tmp577=1.*tmp37*tmp576;
REAL8 tmp578=tmp570+tmp577;
REAL8 tmp579=1.*tmp37*tmp578;
REAL8 tmp580=tmp569+tmp579;
REAL8 tmp581=-(eta*tmp39*tmp568*tmp580);
REAL8 tmp582=2.*tmp102*tmp280*tmp39;
REAL8 tmp586=-2.*tmp102*tmp585;
REAL8 tmp587=tmp581+tmp582+tmp586;
REAL8 tmp563=4.*tmp15*tmp280;
REAL8 tmp588=-(tmp13*tmp57*tmp587);
REAL8 tmp589=tmp563+tmp588;
REAL8 tmp592=-(tmp149*tmp238*tmp378*tmp380*tmp383*tmp4*tmp537);
REAL8 tmp593=tmp102*tmp118*tmp151*tmp224*tmp39*tmp523*tmp542;
REAL8 tmp594=tmp220*tmp238*tmp280*tmp509*tmp533;
REAL8 tmp595=-(tmp102*tmp126*tmp221*tmp39*tmp4*tmp542);
REAL8 tmp596=tmp198*tmp526*tmp542;
REAL8 tmp597=tmp594+tmp595+tmp596;
REAL8 tmp598=tmp102*tmp39*tmp4*tmp57*tmp597;
REAL8 tmp599=tmp592+tmp593+tmp598;
REAL8 tmp548=1./(tmp109*tmp109*tmp109);
REAL8 tmp562=2.*tmp109*tmp14;
REAL8 tmp590=-2.*tmp14*tmp280*tmp589;
REAL8 tmp591=tmp562+tmp590;
REAL8 tmp552=pow(tmp198,-2.5);
REAL8 tmp557=(1.0/sqrt(tmp379*tmp379*tmp379));
REAL8 tmp559=(1.0/sqrt(tmp382*tmp382*tmp382));
REAL8 tmp510=tmp37*tmp457*x->data[0];
REAL8 tmp511=tmp37*tmp482*x->data[1];
REAL8 tmp512=tmp37*tmp498*x->data[2];
REAL8 tmp513=tmp510+tmp511+tmp512;
REAL8 tmp632=1./sqrt(tmp532);
REAL8 tmp633=eta*tmp126*tmp30*tmp39*tmp4*tmp81;
REAL8 tmp634=2.*tmp102*tmp126*tmp9;
REAL8 tmp635=tmp633+tmp634;
REAL8 tmp665=tmp157*tmp341;
REAL8 tmp666=tmp163*tmp357;
REAL8 tmp667=tmp169*tmp373;
REAL8 tmp668=tmp113*tmp457;
REAL8 tmp669=tmp139*tmp482;
REAL8 tmp670=tmp145*tmp498;
REAL8 tmp671=tmp665+tmp666+tmp667+tmp668+tmp669+tmp670;
REAL8 tmp673=tmp263*tmp341;
REAL8 tmp674=tmp267*tmp357;
REAL8 tmp675=tmp271*tmp373;
REAL8 tmp676=tmp228*tmp457;
REAL8 tmp677=tmp232*tmp482;
REAL8 tmp678=tmp236*tmp498;
REAL8 tmp679=tmp673+tmp674+tmp675+tmp676+tmp677+tmp678;
REAL8 tmp649=0.5*tmp278*tmp387;
REAL8 tmp650=tmp246+tmp247+tmp248+tmp249+tmp250+tmp252+tmp253+tmp254+tmp259+tmp260+tmp277+tmp649;
REAL8 tmp204=(1.0/(tmp102*tmp102));
REAL8 tmp716=-(tmp102*tmp39*tmp4);
REAL8 tmp717=tmp1+tmp10+tmp12+tmp2+tmp3+tmp716+tmp8;
REAL8 tmp725=tmp199*tmp280;
REAL8 tmp726=-tmp632;
REAL8 tmp727=tmp725+tmp726;
REAL8 tmp735=-4.*tmp102*tmp289*tmp39;
REAL8 tmp736=tmp15*tmp587;
REAL8 tmp737=tmp735+tmp736;
REAL8 tmp738=0.5*tmp15*tmp151*tmp196*tmp200*tmp28*tmp737;
REAL8 tmp739=tmp725+tmp738;
REAL8 tmp718=2.*tmp520;
REAL8 tmp719=1.+tmp718;
REAL8 tmp715=1/tmp526;
REAL8 tmp720=-(tmp13*tmp149*tmp15*tmp151*tmp280*tmp380*tmp383*tmp389*tmp509*tmp54*tmp57*tmp717*tmp719);
REAL8 tmp721=-2.*tmp102*tmp39*tmp4;
REAL8 tmp722=tmp533*tmp587;
REAL8 tmp723=tmp721+tmp722;
REAL8 tmp724=-0.5*tmp129*tmp149*tmp280*tmp378*tmp383*tmp521*tmp542*tmp723;
REAL8 tmp728=tmp238*tmp280*tmp380*tmp537*tmp727;
REAL8 tmp729=-(tmp13*tmp199*tmp220*tmp54*tmp57);
REAL8 tmp730=-(tmp13*tmp199*tmp54);
REAL8 tmp731=tmp13*tmp15*tmp151*tmp199*tmp54*tmp717;
REAL8 tmp732=tmp730+tmp731;
REAL8 tmp733=tmp220*tmp57*tmp732;
REAL8 tmp734=tmp238*tmp280*tmp727;
REAL8 tmp740=-(tmp238*tmp280*tmp739);
REAL8 tmp741=tmp733+tmp734+tmp740;
REAL8 tmp742=tmp520*tmp741;
REAL8 tmp743=tmp729+tmp742;
REAL8 tmp744=tmp380*tmp537*tmp743;
REAL8 tmp745=tmp149*tmp280*tmp378*tmp383*tmp542*tmp719*tmp739;
REAL8 tmp746=tmp728+tmp744+tmp745;
REAL8 tmp747=tmp380*tmp746;
REAL8 tmp748=tmp724+tmp747;
REAL8 tmp749=tmp533*tmp748;
REAL8 tmp750=tmp720+tmp749;
REAL8 tmp211=(1.0/(tmp39*tmp39));
REAL8 tmp604=2.*eta*tmp280*tmp30*tmp39*tmp81;
REAL8 tmp605=-2.*eta*tmp30*tmp585*tmp81;
REAL8 tmp606=4.*c1k2*tmp9;
REAL8 tmp607=6.*c1k3*tmp9;
REAL8 tmp608=4.*tmp24;
REAL8 tmp609=5.*tmp19*tmp37;
REAL8 tmp610=tmp608+tmp609;
REAL8 tmp611=1.*tmp37*tmp610;
REAL8 tmp612=tmp607+tmp611;
REAL8 tmp613=1.*tmp37*tmp612;
REAL8 tmp614=tmp606+tmp613;
REAL8 tmp615=-(eta*tmp37*tmp39*tmp568*tmp614);
REAL8 tmp616=(1.0/(tmp567*tmp567));
REAL8 tmp617=eta*tmp30*tmp39*tmp580*tmp616;
REAL8 tmp618=-2.*eta*tmp28*tmp568*tmp580*tmp9;
REAL8 tmp619=0.+tmp604+tmp605+tmp615+tmp617+tmp618;
REAL8 tmp760=2.*tmp9;
REAL8 tmp761=-(eta*tmp30*tmp39*tmp4*tmp81);
REAL8 tmp762=-2.*tmp102*tmp9;
REAL8 tmp763=tmp760+tmp761+tmp762;
REAL8 tmp789=-(tmp208*tmp209*tmp280);
REAL8 tmp790=(1.0/sqrt(tmp532*tmp532*tmp532));
REAL8 tmp791=0.5*tmp635*tmp790;
REAL8 tmp792=tmp789+tmp791;
REAL8 tmp814=-4.*eta*tmp289*tmp30*tmp39*tmp81;
REAL8 tmp815=tmp15*tmp619;
REAL8 tmp816=-8.*tmp102*tmp280*tmp9;
REAL8 tmp817=2.*tmp587*tmp9;
REAL8 tmp818=tmp814+tmp815+tmp816+tmp817;
REAL8 tmp819=0.5*tmp15*tmp151*tmp196*tmp200*tmp28*tmp818;
REAL8 tmp820=-0.5*tmp106*tmp110*tmp15*tmp196*tmp200*tmp28*tmp737;
REAL8 tmp821=-0.5*eta*tmp15*tmp151*tmp196*tmp204*tmp28*tmp30*tmp737*tmp81;
REAL8 tmp822=-(tmp15*tmp151*tmp200*tmp211*tmp5*tmp737*tmp9);
REAL8 tmp823=1.*tmp151*tmp196*tmp200*tmp28*tmp737*tmp9;
REAL8 tmp824=tmp789+tmp819+tmp820+tmp821+tmp822+tmp823;
REAL8 tmp244=1./sqrt(tmp201);
REAL8 tmp242=sqrt(tmp241);
REAL8 ds010000=(1.*eta*(-2.*tmp106*tmp110*tmp14*tmp280*tmp375-tmp106*tmp110*tmp149*tmp223*tmp280*tmp375*tmp378*tmp385*tmp387+tmp151*tmp194*tmp223*tmp280*tmp375*tmp378*tmp385*tmp387+0.5*tmp149*tmp151*tmp208*tmp223*tmp280*tmp375*tmp385*tmp387*tmp389-2.*tmp106*tmp110*tmp14*tmp149*tmp4+2.*tmp14*tmp151*tmp194*tmp4+tmp149*tmp151*tmp223*tmp280*tmp375*tmp378*tmp387*(0.5*tmp208*tmp383*tmp389-0.5*tmp392*tmp395+0.5*tmp378*tmp398*tmp403)-0.5*tmp149*tmp151*tmp223*tmp278*tmp280*tmp375*tmp378*tmp385*tmp408+2.*coeffs->dheffSSv2*eta*s1Vec->data[1]*tmp5+2.*tmp14*tmp151*tmp280*tmp500+tmp149*tmp151*tmp223*tmp280*tmp378*tmp385*tmp387*tmp500-0.5*tmp26*(2.*tmp341*tmp457+2.*tmp357*tmp482+2.*tmp373*tmp498-6.*tmp509*tmp513)+1.*tmp102*tmp110*tmp278*tmp289*tmp39*tmp392*tmp398*tmp517*tmp518*tmp519*tmp522*tmp54*tmp546+1.*tmp102*tmp110*tmp278*tmp289*tmp39*tmp392*tmp398*tmp408*tmp517*tmp518*tmp54*tmp546*tmp549+4.*tmp102*tmp106*tmp289*tmp387*tmp39*tmp392*tmp398*tmp517*tmp518*tmp54*tmp546*tmp548*tmp549+3.*tmp102*tmp110*tmp208*tmp289*tmp387*tmp39*tmp392*tmp398*tmp517*tmp54*tmp546*tmp549*tmp552+1.*tmp102*tmp110*tmp289*tmp387*tmp39*tmp395*tmp398*tmp517*tmp518*tmp54*tmp546*tmp549*tmp557+1.*tmp102*tmp110*tmp289*tmp387*tmp39*tmp392*tmp403*tmp517*tmp518*tmp54*tmp546*tmp549*tmp559-0.25*tmp110*tmp223*tmp278*tmp392*tmp398*tmp518*tmp519*tmp522*tmp533*tmp591*tmp599-0.25*tmp110*tmp223*tmp278*tmp392*tmp398*tmp408*tmp518*tmp533*tmp549*tmp591*tmp599-tmp106*tmp223*tmp387*tmp392*tmp398*tmp518*tmp533*tmp548*tmp549*tmp591*tmp599-0.75*tmp110*tmp208*tmp223*tmp387*tmp392*tmp398*tmp533*tmp549*tmp552*tmp591*tmp599-0.25*tmp110*tmp223*tmp387*tmp395*tmp398*tmp518*tmp533*tmp549*tmp557*tmp591*tmp599-0.25*tmp110*tmp223*tmp387*tmp392*tmp403*tmp518*tmp533*tmp549*tmp559*tmp591*tmp599+0.25*tmp110*tmp223*tmp387*tmp392*tmp398*tmp518*tmp549*tmp591*tmp599*tmp632*tmp635-tmp196*tmp200*tmp208*tmp209*tmp223*tmp28*tmp383*tmp715*tmp750+0.5*tmp196*tmp199*tmp200*tmp223*tmp28*tmp398*tmp403*tmp715*tmp750-2.*eta*tmp110*tmp289*tmp30*tmp387*tmp39*tmp392*tmp398*tmp517*tmp518*tmp54*tmp546*tmp549*tmp81-eta*tmp196*tmp199*tmp204*tmp223*tmp28*tmp30*tmp383*tmp715*tmp750*tmp81+2.*tmp151*tmp280*tmp375*tmp40*tmp9+2.*tmp149*tmp151*tmp4*tmp40*tmp9-6.*tmp102*tmp110*tmp14*tmp289*tmp387*tmp39*tmp392*tmp398*tmp518*tmp54*tmp546*tmp549*tmp9-4.*tmp102*tmp110*tmp280*tmp387*tmp392*tmp398*tmp517*tmp518*tmp54*tmp546*tmp549*tmp9-2.*tmp199*tmp200*tmp211*tmp223*tmp383*tmp5*tmp715*tmp750*tmp9+2.*tmp149*tmp151*tmp251*tmp280*tmp375*tmp378*tmp385*tmp387*tmp54*tmp98-2.*tmp102*tmp110*tmp289*tmp387*tmp39*tmp392*tmp398*tmp517*tmp518*tmp546*tmp549*tmp98+1.*tmp110*tmp251*tmp387*tmp392*tmp398*tmp518*tmp533*tmp54*tmp549*tmp591*tmp599*tmp98+2.*tmp196*tmp199*tmp200*tmp251*tmp28*tmp383*tmp54*tmp715*tmp750*tmp98+0.5*tmp110*tmp223*tmp387*tmp392*tmp398*tmp518*tmp533*tmp549*tmp591*(-(tmp194*tmp238*tmp378*tmp380*tmp383*tmp4*tmp537)-tmp149*tmp276*tmp378*tmp380*tmp383*tmp4*tmp537-0.5*tmp149*tmp208*tmp238*tmp380*tmp383*tmp389*tmp4*tmp537-0.5*tmp149*tmp238*tmp378*tmp383*tmp392*tmp395*tmp4*tmp537-0.5*tmp149*tmp238*tmp378*tmp380*tmp398*tmp4*tmp403*tmp537+2.*tmp102*tmp118*tmp151*tmp198*tmp208*tmp224*tmp39*tmp542+2.*tmp102*tmp118*tmp149*tmp151*tmp194*tmp39*tmp523*tmp542-tmp102*tmp106*tmp110*tmp118*tmp224*tmp39*tmp523*tmp542-tmp149*tmp238*tmp378*tmp380*tmp383*tmp4*tmp671+tmp102*tmp118*tmp151*tmp224*tmp39*tmp523*tmp679+eta*tmp118*tmp151*tmp224*tmp30*tmp39*tmp523*tmp542*tmp81+eta*tmp30*tmp39*tmp4*tmp57*tmp597*tmp81+2.*tmp102*tmp151*tmp224*tmp4*tmp523*tmp542*tmp9+2.*tmp102*tmp57*tmp597*tmp9+tmp102*tmp39*tmp4*tmp57*(tmp238*tmp258*tmp280*tmp509*tmp533+tmp220*tmp276*tmp280*tmp509*tmp533+tmp220*tmp238*tmp280*tmp513*tmp533-2.*tmp102*tmp126*tmp220*tmp258*tmp39*tmp4*tmp542+tmp208*tmp526*tmp542+0.5*tmp220*tmp238*tmp280*tmp509*tmp632*tmp635+tmp198*tmp542*tmp650-tmp102*tmp126*tmp221*tmp39*tmp4*tmp679+tmp198*tmp526*tmp679-eta*tmp126*tmp221*tmp30*tmp39*tmp4*tmp542*tmp81-2.*tmp102*tmp126*tmp221*tmp542*tmp9)-2.*tmp102*tmp39*tmp4*tmp54*tmp597*tmp98)+0.5*tmp110*tmp223*tmp387*tmp392*tmp398*tmp518*tmp533*tmp549*tmp599*(2.*tmp106*tmp14+2.*tmp109*tmp40*tmp9-2.*tmp280*tmp40*tmp589*tmp9-2.*tmp14*tmp280*(-(tmp13*tmp57*tmp619)+8.*tmp280*tmp9-2.*tmp57*tmp587*tmp9+2.*tmp13*tmp54*tmp587*tmp98))-2.*tmp102*tmp110*tmp289*tmp387*tmp39*tmp392*tmp398*tmp517*tmp518*tmp54*tmp549*(tmp513*tmp530-tmp258*tmp380*tmp533*tmp544-0.5*tmp220*tmp392*tmp395*tmp533*tmp544-0.5*tmp220*tmp380*tmp544*tmp632*tmp635-tmp220*tmp380*tmp533*(-(tmp194*tmp280*tmp378*tmp383*tmp537)-0.5*tmp149*tmp208*tmp280*tmp383*tmp389*tmp537-0.5*tmp149*tmp280*tmp378*tmp398*tmp403*tmp537+tmp276*tmp280*tmp380*tmp542+0.5*tmp238*tmp280*tmp392*tmp395*tmp542-tmp149*tmp280*tmp378*tmp383*tmp671+tmp238*tmp280*tmp380*tmp679)+tmp509*(-2.*tmp102*tmp118*tmp151*tmp198*tmp208*tmp224*tmp39-2.*tmp102*tmp118*tmp149*tmp151*tmp194*tmp39*tmp523+tmp102*tmp106*tmp110*tmp118*tmp224*tmp39*tmp523-eta*tmp118*tmp151*tmp224*tmp30*tmp39*tmp523*tmp81+eta*tmp30*tmp39*tmp4*tmp528*tmp81-2.*tmp102*tmp151*tmp224*tmp4*tmp523*tmp9+2.*tmp102*tmp528*tmp9+tmp102*tmp39*tmp4*(2.*tmp238*tmp276*tmp4-tmp208*tmp526*tmp57-tmp198*tmp57*tmp650+2.*tmp198*tmp526*tmp54*tmp98)))+tmp196*tmp199*tmp200*tmp223*tmp28*tmp383*tmp715*(-(tmp13*tmp149*tmp15*tmp151*tmp278*tmp280*tmp380*tmp383*tmp387*tmp389*tmp509*tmp54*tmp57*tmp717)+tmp106*tmp110*tmp13*tmp149*tmp15*tmp280*tmp380*tmp383*tmp389*tmp509*tmp54*tmp57*tmp717*tmp719-tmp13*tmp15*tmp151*tmp194*tmp280*tmp380*tmp383*tmp389*tmp509*tmp54*tmp57*tmp717*tmp719-0.5*tmp13*tmp149*tmp15*tmp151*tmp280*tmp383*tmp389*tmp392*tmp395*tmp509*tmp54*tmp57*tmp717*tmp719-0.5*tmp13*tmp149*tmp15*tmp151*tmp280*tmp380*tmp389*tmp398*tmp403*tmp509*tmp54*tmp57*tmp717*tmp719-tmp13*tmp149*tmp15*tmp151*tmp280*tmp380*tmp383*tmp389*tmp513*tmp54*tmp57*tmp717*tmp719+0.5*tmp13*tmp149*tmp15*tmp151*tmp208*tmp280*tmp380*tmp383*tmp509*tmp518*tmp54*tmp57*tmp717*tmp719+0.5*tmp632*tmp635*tmp748-tmp13*tmp149*tmp15*tmp151*tmp280*tmp380*tmp383*tmp389*tmp509*tmp54*tmp57*tmp719*tmp763-2.*tmp13*tmp149*tmp151*tmp280*tmp380*tmp383*tmp389*tmp509*tmp54*tmp57*tmp717*tmp719*tmp9-2.*tmp149*tmp15*tmp151*tmp280*tmp380*tmp383*tmp389*tmp509*tmp54*tmp57*tmp717*tmp719*tmp9+2.*tmp13*tmp149*tmp15*tmp151*tmp280*tmp380*tmp383*tmp389*tmp509*tmp55*tmp717*tmp719*tmp98-tmp13*tmp149*tmp15*tmp151*tmp280*tmp380*tmp383*tmp389*tmp509*tmp57*tmp717*tmp719*tmp98+tmp533*(-0.25*tmp129*tmp149*tmp278*tmp280*tmp378*tmp383*tmp387*tmp542*tmp723+0.25*tmp149*tmp172*tmp175*tmp280*tmp378*tmp383*tmp521*tmp542*tmp723-0.5*tmp129*tmp194*tmp280*tmp378*tmp383*tmp521*tmp542*tmp723-0.25*tmp129*tmp149*tmp208*tmp280*tmp383*tmp389*tmp521*tmp542*tmp723-0.25*tmp129*tmp149*tmp280*tmp378*tmp398*tmp403*tmp521*tmp542*tmp723-0.5*tmp129*tmp149*tmp280*tmp378*tmp383*tmp521*tmp679*tmp723+0.5*tmp392*tmp395*tmp746-0.5*tmp129*tmp149*tmp280*tmp378*tmp383*tmp521*tmp542*(tmp533*tmp619+0.5*tmp587*tmp632*tmp635-2.*eta*tmp30*tmp39*tmp4*tmp81-4.*tmp102*tmp9)+tmp380*(tmp276*tmp280*tmp380*tmp537*tmp727+0.5*tmp238*tmp280*tmp392*tmp395*tmp537*tmp727+tmp238*tmp280*tmp380*tmp671*tmp727+1.*tmp149*tmp278*tmp280*tmp378*tmp383*tmp387*tmp542*tmp739+tmp194*tmp280*tmp378*tmp383*tmp542*tmp719*tmp739+0.5*tmp149*tmp208*tmp280*tmp383*tmp389*tmp542*tmp719*tmp739+0.5*tmp149*tmp280*tmp378*tmp398*tmp403*tmp542*tmp719*tmp739+tmp149*tmp280*tmp378*tmp383*tmp679*tmp719*tmp739+0.5*tmp392*tmp395*tmp537*tmp743+tmp380*tmp671*tmp743+tmp238*tmp280*tmp380*tmp537*tmp792+tmp149*tmp280*tmp378*tmp383*tmp542*tmp719*tmp824+tmp380*tmp537*(tmp13*tmp208*tmp209*tmp220*tmp54*tmp57-tmp13*tmp199*tmp258*tmp54*tmp57+0.5*tmp278*tmp387*tmp741-2.*tmp199*tmp220*tmp54*tmp57*tmp9+2.*tmp13*tmp199*tmp220*tmp55*tmp98-tmp13*tmp199*tmp220*tmp57*tmp98+tmp520*(tmp276*tmp280*tmp727+tmp258*tmp57*tmp732-tmp276*tmp280*tmp739+tmp238*tmp280*tmp792-tmp238*tmp280*tmp824-2.*tmp220*tmp54*tmp732*tmp98+tmp220*tmp57*(tmp13*tmp208*tmp209*tmp54-tmp106*tmp110*tmp13*tmp15*tmp199*tmp54*tmp717-tmp13*tmp15*tmp151*tmp208*tmp209*tmp54*tmp717+tmp13*tmp15*tmp151*tmp199*tmp54*tmp763-2.*tmp199*tmp54*tmp9+2.*tmp13*tmp151*tmp199*tmp54*tmp717*tmp9+2.*tmp15*tmp151*tmp199*tmp54*tmp717*tmp9-tmp13*tmp199*tmp98+tmp13*tmp15*tmp151*tmp199*tmp717*tmp98))))))-0.5*tmp242*(tmp106*tmp196*tmp199*tmp200*tmp28-tmp109*tmp196*tmp200*tmp208*tmp209*tmp28-eta*tmp109*tmp196*tmp199*tmp204*tmp28*tmp30*tmp81-2.*tmp109*tmp199*tmp200*tmp211*tmp5*tmp9)*(1.0/sqrt(tmp201*tmp201*tmp201))-tmp196*tmp199*tmp200*tmp223*tmp28*tmp383*tmp650*tmp750*(1.0/(tmp526*tmp526))+(0.5*tmp244*tmp278)/sqrt(tmp241)))/sqrt(1.+2.*eta*(-1.+tmp242*tmp244+2.*tmp14*tmp151*tmp280*tmp375+tmp149*tmp151*tmp223*tmp280*tmp375*tmp378*tmp385*tmp387+2.*tmp14*tmp149*tmp151*tmp4-2.*tmp102*tmp110*tmp289*tmp387*tmp39*tmp392*tmp398*tmp517*tmp518*tmp54*tmp546*tmp549+0.5*tmp110*tmp223*tmp387*tmp392*tmp398*tmp518*tmp533*tmp549*tmp591*tmp599+tmp196*tmp199*tmp200*tmp223*tmp28*tmp383*tmp715*tmp750+coeffs->dheffSSv2*eta*tmp5*(s1Vec->data[0]*s1Vec->data[0]+s1Vec->data[1]*s1Vec->data[1]+s1Vec->data[2]*s1Vec->data[2]+s2Vec->data[0]*s2Vec->data[0]+s2Vec->data[1]*s2Vec->data[1]+s2Vec->data[2]*s2Vec->data[2])-0.5*tmp26*(tmp341*tmp341+tmp357*tmp357+tmp373*tmp373-3.*(tmp509*tmp509))));
