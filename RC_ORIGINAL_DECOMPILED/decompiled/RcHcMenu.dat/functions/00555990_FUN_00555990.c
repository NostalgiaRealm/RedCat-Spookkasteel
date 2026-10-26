/*
 * FUN_00555990 at 00555990
 * undefined __register FUN_00555990(int * param_1, undefined4 param_2)
 * Address ranges: 00555990-00555dff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x555088 slot published:GDIFormShow for TfrmPlayer. Original bytes unchanged; names and types still inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00555c3e) */
/* WARNING: Removing unreachable block (ram,0x00555bb4) */
/* WARNING: Removing unreachable block (ram,0x00555bd7) */
/* WARNING: Removing unreachable block (ram,0x00555c61) */
/* WARNING: Removing unreachable block (ram,0x00555bbe) */
/* WARNING: Removing unreachable block (ram,0x00555c48) */
/* Recovered original virtual function entry from validated Delphi VMT 0x555088 slot
   published:GDIFormShow for TfrmPlayer. Original bytes unchanged; names and types still inferred.
    */

void FUN_00555990(int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int iVar4;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  int extraout_EDX_09;
  undefined4 extraout_EDX_10;
  int extraout_EDX_11;
  int extraout_EDX_12;
  int extraout_EDX_13;
  int extraout_EDX_14;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar5;
  undefined4 uStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  undefined4 local_128;
  undefined1 local_124;
  uint *local_120;
  byte local_11c [256];
  int local_1c;
  undefined4 *local_18;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_12c = &stack0xfffffffc;
  local_120 = (uint *)0x0;
  local_18 = (undefined4 *)0x0;
  local_1c = 0;
  puStack_130 = &LAB_00555e00;
  uStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_134;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_11c);
  FUN_00403fd4(&local_1c,local_11c);
  FUN_004040f0((int *)&local_18,3);
  puVar5 = local_18;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar5,1);
  FUN_0054ee68((int)local_8);
  FUN_00432744(local_8[0xc0],*(uint **)(PTR_DAT_00572404 + 0xa8));
  local_128 = *(undefined4 *)(PTR_DAT_00572404 + 0xe4);
  local_124 = 0xb;
  FUN_0040a894(*(byte **)(PTR_DAT_00572404 + 0x10),&local_128,0,(int *)&local_120);
  FUN_00432744(local_8[0xcc],local_120);
  FUN_00432744(local_8[0xc2],*(uint **)(PTR_DAT_00572404 + 0x124));
  FUN_00432744(local_8[0xc3],*(uint **)(PTR_DAT_00572404 + 0x128));
  FUN_005552f8((int)local_8);
  local_10 = *(int *)(local_8[0xc4] + 0x38) + 2;
  if (SCARRY4(*(int *)(local_8[0xc4] + 0x38),2)) {
    local_10 = thunk_FUN_00402874(local_10);
  }
  uVar2 = *(int *)(local_8[0xc4] + 0x3c) + 2;
  if (SCARRY4(*(int *)(local_8[0xc4] + 0x3c),2)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  local_14 = uVar2;
  FUN_00431f54((int *)local_8[0xc4],0x84);
  FUN_00431f54((int *)local_8[0xc5],*(undefined4 *)(local_8[0xc4] + 0x34));
  FUN_00431f54((int *)local_8[0xc6],*(undefined4 *)(local_8[0xc4] + 0x34));
  uVar2 = FUN_00431f54((int *)local_8[199],*(undefined4 *)(local_8[0xc4] + 0x34));
  iVar3 = local_14 + 0x84;
  if (SCARRY4(local_14,0x84)) {
    thunk_FUN_00402874(uVar2);
    iVar3 = extraout_EDX;
  }
  FUN_00431f54((int *)local_8[200],iVar3);
  FUN_00431f54((int *)local_8[0xc9],*(undefined4 *)(local_8[200] + 0x34));
  FUN_00431f54((int *)local_8[0xca],*(undefined4 *)(local_8[200] + 0x34));
  FUN_00431f54((int *)local_8[0xcb],*(undefined4 *)(local_8[200] + 0x34));
  uVar2 = FUN_00431f34((int *)local_8[0xc4],100);
  iVar3 = local_10 + 100;
  if (SCARRY4(local_10,100)) {
    thunk_FUN_00402874(uVar2);
    iVar3 = extraout_EDX_00;
  }
  uVar2 = FUN_00431f34((int *)local_8[0xc5],iVar3);
  iVar3 = (int)((longlong)(int)local_10 * 2);
  if ((longlong)iVar3 != (longlong)(int)local_10 * 2) {
    uVar2 = thunk_FUN_00402874(uVar2);
    iVar3 = extraout_EDX_01;
  }
  iVar4 = iVar3 + 100;
  if (SCARRY4(iVar3,100)) {
    thunk_FUN_00402874(uVar2);
    iVar4 = extraout_EDX_02;
  }
  uVar2 = FUN_00431f34((int *)local_8[0xc6],iVar4);
  iVar3 = (int)((longlong)(int)local_10 * 3);
  if ((longlong)iVar3 != (longlong)(int)local_10 * 3) {
    uVar2 = thunk_FUN_00402874(uVar2);
    iVar3 = extraout_EDX_03;
  }
  iVar4 = iVar3 + 100;
  if (SCARRY4(iVar3,100)) {
    thunk_FUN_00402874(uVar2);
    iVar4 = extraout_EDX_04;
  }
  FUN_00431f34((int *)local_8[199],iVar4);
  uVar2 = FUN_00431f34((int *)local_8[200],100);
  iVar3 = local_10 + 100;
  if (SCARRY4(local_10,100)) {
    thunk_FUN_00402874(uVar2);
    iVar3 = extraout_EDX_05;
  }
  uVar2 = FUN_00431f34((int *)local_8[0xc9],iVar3);
  iVar3 = (int)((longlong)(int)local_10 * 2);
  if ((longlong)iVar3 != (longlong)(int)local_10 * 2) {
    uVar2 = thunk_FUN_00402874(uVar2);
    iVar3 = extraout_EDX_06;
  }
  iVar4 = iVar3 + 100;
  if (SCARRY4(iVar3,100)) {
    thunk_FUN_00402874(uVar2);
    iVar4 = extraout_EDX_07;
  }
  uVar2 = FUN_00431f34((int *)local_8[0xca],iVar4);
  iVar3 = (int)((longlong)(int)local_10 * 3);
  if ((longlong)iVar3 != (longlong)(int)local_10 * 3) {
    uVar2 = thunk_FUN_00402874(uVar2);
    iVar3 = extraout_EDX_08;
  }
  iVar4 = iVar3 + 100;
  if (SCARRY4(iVar3,100)) {
    thunk_FUN_00402874(uVar2);
    iVar4 = extraout_EDX_09;
  }
  FUN_00431f34((int *)local_8[0xcb],iVar4);
  (**(code **)(*(int *)local_8[0xbc] + 0x5c))((int *)local_8[0xbc],0);
  FUN_00432bec((int *)local_8[0xbc],extraout_EDX_10,extraout_ECX);
  piVar1 = (int *)(local_8[0xbd] + 0x38);
  iVar3 = local_8[0xe] - *piVar1;
  if (SBORROW4(local_8[0xe],*piVar1)) {
    thunk_FUN_00402874(local_8[0xbd]);
    iVar3 = extraout_EDX_11;
  }
  FUN_00431f34((int *)local_8[0xbd],iVar3);
  iVar3 = FUN_00569038(*(int **)PTR_DAT_00572108);
  (**(code **)(*(int *)local_8[0xc3] + 0x5c))((int *)local_8[0xc3],0 < iVar3);
  iVar3 = FUN_00569038(*(int **)PTR_DAT_00572108);
  (**(code **)(*(int *)local_8[0xc2] + 0x5c))((int *)local_8[0xc2],iVar3 < 8);
  FUN_00431f34((int *)local_8[0xc2],0);
  uVar2 = local_8[0xc2];
  iVar3 = local_8[0xf] - *(int *)(uVar2 + 0x3c);
  if (SBORROW4(local_8[0xf],*(int *)(uVar2 + 0x3c))) {
    uVar2 = thunk_FUN_00402874(uVar2);
    iVar3 = extraout_EDX_12;
  }
  iVar4 = iVar3 + -2;
  if (SBORROW4(iVar3,2)) {
    thunk_FUN_00402874(uVar2);
    iVar4 = extraout_EDX_13;
  }
  FUN_00431f54((int *)local_8[0xc2],iVar4);
  piVar1 = (int *)(local_8[0xc2] + 0x38);
  iVar3 = *(int *)(local_8[0xc2] + 0x30) + *piVar1;
  if (SCARRY4(*(int *)(local_8[0xc2] + 0x30),*piVar1)) {
    thunk_FUN_00402874(local_8[0xc2]);
    iVar3 = extraout_EDX_14;
  }
  FUN_00431f34((int *)local_8[0xc3],iVar3);
  FUN_00431f54((int *)local_8[0xc3],*(undefined4 *)(local_8[0xc2] + 0x34));
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = "FormShow";
  FUN_00403db0((int *)&local_120);
  FUN_00403dd4(&local_1c,2);
  return;
}

