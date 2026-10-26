/*
 * FUN_00568170 at 00568170
 * undefined __register FUN_00568170(int * param_1)
 * Address ranges: 00568170-00568809
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x567c30 slot published:DataCreate for TData. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x567c30 slot
   published:DataCreate for TData. Original bytes unchanged; names and types still inferred. */

void FUN_00568170(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  undefined4 *in_FS_OFFSET;
  undefined *local_140;
  undefined4 *local_13c;
  undefined4 *local_138;
  undefined *local_134;
  undefined *local_130;
  undefined *local_12c;
  undefined *local_128;
  undefined4 *local_124;
  byte local_120 [232];
  undefined4 uStackY_38;
  undefined4 *puVar5;
  int local_20;
  undefined4 *local_1c;
  undefined1 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int *local_8;
  
  local_14 = (undefined4 *)&stack0xfffffffc;
  local_10 = (undefined4 *)0x27;
  do {
    local_10 = (undefined4 *)((int)local_10 + -1);
  } while (local_10 != (undefined4 *)0x0);
  local_18 = &LAB_0056880a;
  local_1c = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_1c;
  local_20 = 0x5681a4;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_120);
  local_20 = 0x5681b2;
  FUN_00403fd4(&local_20,local_120);
  FUN_004040f0((int *)&local_1c,3);
  puVar5 = local_1c;
  uVar1 = FUN_004a418c();
  FUN_004a48b8(uVar1,puVar5,0);
  iVar2 = FUN_004a418c();
  FUN_004a4c44(iVar2);
  FUN_00402ab8();
  FUN_00451854(*(undefined4 *)PTR_DAT_005723fc,(int *)&local_128);
  FUN_00409f84(local_128,(int *)&local_124);
  FUN_00403e04(local_8 + 0x44,local_124);
  FUN_00568c74((int)local_8);
  FUN_0040407c((int *)&local_12c,(undefined4 *)local_8[0x44],(undefined4 *)"settings\\menu.ini");
  FUN_004b02c4(local_12c);
  FUN_0040407c((int *)&local_130,(undefined4 *)local_8[0x44],(undefined4 *)"game.ini");
  FUN_004b02c4(local_130);
  FUN_0040407c((int *)&local_134,(undefined4 *)local_8[0x44],(undefined4 *)"Settings\\Game.ini");
  FUN_004b02c4(local_134);
  FUN_00569b84((int)local_8);
  iVar2 = FUN_00551cb4((int *)&PTR_FUN_00551c78,'\x01');
  local_8[0x48] = iVar2;
  FUN_0040407c((int *)&local_138,(undefined4 *)local_8[0x44],(undefined4 *)"Settings\\static.ini");
  FUN_00551ed4((int *)local_8[0x48],local_138);
  piVar3 = FUN_00550eb8((int *)&PTR_FUN_00550e44,'\x01',extraout_ECX);
  local_8[0x47] = (int)piVar3;
  FUN_0040407c((int *)&local_13c,(undefined4 *)local_8[0x44],(undefined4 *)"settings\\menu.ini");
  FUN_004a517c((int *)local_8[0x47],local_13c);
  piVar3 = (int *)(**(code **)(*(int *)local_8[0x47] + 8))();
  iVar2 = FUN_004a418c();
  FUN_004a4afc(iVar2,0x5688ac,piVar3);
  if (*(char *)(local_8[0x47] + 8) == '\0') {
    FUN_00569170(local_8,*(undefined4 *)(*(int *)(DAT_005748e0 + 0x11c) + 0x28));
  }
  FUN_0040407c((int *)&local_c,(undefined4 *)local_8[0x44],(undefined4 *)"MenuRcs");
  iVar2 = FUN_00404030(*(int *)(*(int *)(DAT_005748e0 + 0x11c) + 0x1c));
  if (0 < iVar2) {
    FUN_0040407c((int *)&local_140,*(undefined4 **)(*(int *)(DAT_005748e0 + 0x11c) + 0x1c),
                 (undefined4 *)&DAT_005688d8);
    uVar4 = FUN_00409dd0(local_140);
    if ((char)uVar4 != '\0') {
      FUN_00403e48((int *)&local_c,*(int *)(*(int *)(DAT_005748e0 + 0x11c) + 0x1c));
    }
  }
  FUN_0040407c((int *)&local_10,(undefined4 *)local_8[0x44],(undefined4 *)"Sound\\");
  iVar2 = FUN_00404030(*(int *)(*(int *)(DAT_005748e0 + 0x11c) + 0x20));
  if (0 < iVar2) {
    FUN_0040407c((int *)&local_10,*(undefined4 **)(*(int *)(DAT_005748e0 + 0x11c) + 0x20),
                 (undefined4 *)&DAT_005688f8);
  }
  FUN_0040407c((int *)&local_14,(undefined4 *)local_8[0x44],(undefined4 *)"MenuGfx\\");
  iVar2 = FUN_00404030(*(int *)(*(int *)(DAT_005748e0 + 0x11c) + 0x24));
  if (0 < iVar2) {
    FUN_0040407c((int *)&local_14,*(undefined4 **)(*(int *)(DAT_005748e0 + 0x11c) + 0x24),
                 (undefined4 *)&DAT_005688f8);
  }
  iVar2 = FUN_004a67b8((int *)&DAT_004a62a0,'\x01',local_c);
  local_8[0x41] = iVar2;
  iVar2 = FUN_0054f248((int *)&DAT_0054f0c4,'\x01',local_8[0x41],*(int **)PTR_DAT_005722d0,local_10)
  ;
  local_8[0x42] = iVar2;
  uStackY_38 = 0x5684c6;
  puVar5 = local_14;
  iVar2 = FUN_004a78b4((int *)&DAT_004a7890,'\x01',local_8[0x41],local_14);
  local_8[0x43] = iVar2;
  uStackY_38 = 0x5684db;
  iVar2 = FUN_00565a38((int *)&LAB_0056591c,'\x01');
  local_8[0x46] = iVar2;
  uStackY_38 = 0x5684f0;
  piVar3 = FUN_0049a2d4((int *)&PTR_FUN_0049bb88,'\x01',extraout_ECX_00);
  local_8[0x3e] = (int)piVar3;
  uStackY_38 = 0x568505;
  piVar3 = FUN_0049a2d4((int *)&PTR_FUN_0049bb88,'\x01',extraout_ECX_01);
  local_8[0x4a] = (int)piVar3;
  uStackY_38 = 0x56851a;
  piVar3 = FUN_0049a2d4((int *)&PTR_FUN_0049bb88,'\x01',extraout_ECX_02);
  local_8[0x4b] = (int)piVar3;
  uStackY_38 = 0x56852f;
  piVar3 = FUN_0049a2d4((int *)&PTR_FUN_0049bb88,'\x01',extraout_ECX_03);
  local_8[0x4c] = (int)piVar3;
  uStackY_38 = 0x568544;
  piVar3 = FUN_0049a2d4((int *)&PTR_FUN_0049bb88,'\x01',extraout_ECX_04);
  local_8[0x4d] = (int)piVar3;
  uStackY_38 = 0x568559;
  piVar3 = FUN_0049a2d4((int *)&PTR_FUN_0049bb88,'\x01',extraout_ECX_05);
  local_8[0x4e] = (int)piVar3;
  uStackY_38 = 0x56856e;
  piVar3 = FUN_0049a2d4((int *)&PTR_FUN_0049bb88,'\x01',extraout_ECX_06);
  local_8[0x4f] = (int)piVar3;
  uStackY_38 = 0x568583;
  piVar3 = FUN_0049a2d4((int *)&PTR_FUN_0049bb88,'\x01',extraout_ECX_07);
  local_8[0x50] = (int)piVar3;
  uStackY_38 = 0x568598;
  piVar3 = FUN_0049a2d4((int *)&PTR_FUN_0049bb88,'\x01',extraout_ECX_08);
  local_8[0x51] = (int)piVar3;
  uStackY_38 = 0x5685ad;
  piVar3 = FUN_0049a2d4((int *)&PTR_FUN_0049bb88,'\x01',extraout_ECX_09);
  local_8[0x52] = (int)piVar3;
  uStackY_38 = 0x5685c2;
  piVar3 = FUN_0049a2d4((int *)&PTR_FUN_0049bb88,'\x01',extraout_ECX_10);
  local_8[0x53] = (int)piVar3;
  uStackY_38 = 0x5685d7;
  piVar3 = FUN_0049a2d4((int *)&PTR_FUN_0049bb88,'\x01',extraout_ECX_11);
  local_8[0x54] = (int)piVar3;
  uStackY_38 = 0x5685ec;
  piVar3 = FUN_0049a2d4((int *)&PTR_FUN_0049bb88,'\x01',extraout_ECX_12);
  local_8[0x55] = (int)piVar3;
  uStackY_38 = 0x568601;
  piVar3 = FUN_0049a2d4((int *)&PTR_FUN_0049bb88,'\x01',extraout_ECX_13);
  local_8[0x56] = (int)piVar3;
  uStackY_38 = 0x56862a;
  FUN_00403e04((int *)(local_8[0x42] + 0x24),*(undefined4 **)(*(int *)(DAT_005748e0 + 0x11c) + 0x34)
              );
  uStackY_38 = 0x568638;
  FUN_0054fbc8((int *)local_8[0x42]);
  uStackY_38 = 0x568654;
  FUN_004a7f54((int *)local_8[0x43],(undefined4 *)"zwart",(int *)local_8[0x3e]);
  uStackY_38 = 0x568670;
  FUN_004a7f54((int *)local_8[0x43],(undefined4 *)"MessBgnd",(int *)local_8[0x4a]);
  uStackY_38 = 0x56868c;
  FUN_004a7f54((int *)local_8[0x43],(undefined4 *)"EditBgnd",(int *)local_8[0x4b]);
  uStackY_38 = 0x5686a8;
  FUN_004a7f54((int *)local_8[0x43],(undefined4 *)"oHeader",(int *)local_8[0x4c]);
  uStackY_38 = 0x5686c4;
  FUN_004a7f54((int *)local_8[0x43],(undefined4 *)"06010000",(int *)local_8[0x4d]);
  uStackY_38 = 0x5686e0;
  FUN_004a7f54((int *)local_8[0x43],(undefined4 *)"06150000",(int *)local_8[0x4e]);
  uStackY_38 = 0x5686fc;
  FUN_004a7f54((int *)local_8[0x43],(undefined4 *)"00120000",(int *)local_8[0x4f]);
  uStackY_38 = 0x568718;
  FUN_004a7f54((int *)local_8[0x43],(undefined4 *)"0x120000",(int *)local_8[0x50]);
  uStackY_38 = 0x568734;
  FUN_004a7f54((int *)local_8[0x43],(undefined4 *)"06010000",(int *)local_8[0x51]);
  uStackY_38 = 0x568750;
  FUN_004a7f54((int *)local_8[0x43],(undefined4 *)"06020000",(int *)local_8[0x52]);
  uStackY_38 = 0x56876c;
  FUN_004a7f54((int *)local_8[0x43],(undefined4 *)"06030000",(int *)local_8[0x53]);
  uStackY_38 = 0x568788;
  FUN_004a7f54((int *)local_8[0x43],(undefined4 *)"06160000",(int *)local_8[0x54]);
  uStackY_38 = 0x5687a4;
  FUN_004a7f54((int *)local_8[0x43],(undefined4 *)"06170000",(int *)local_8[0x55]);
  uStackY_38 = 0x5687c0;
  FUN_004a7f54((int *)local_8[0x43],(undefined4 *)"06180000",(int *)local_8[0x56]);
  uStackY_38 = 0x5687c8;
  FUN_00569ff4(local_8);
  uStackY_38 = 0x5687cd;
  uVar1 = FUN_004a418c();
  uStackY_38 = 0x5687d2;
  FUN_004a49b0(uVar1);
  *in_FS_OFFSET = puVar5;
  FUN_00403dd4((int *)&local_140,8);
  FUN_00403dd4(&local_20,2);
  FUN_00403dd4((int *)&local_14,3);
  return;
}

