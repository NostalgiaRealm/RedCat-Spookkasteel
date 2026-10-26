/*
 * FUN_0055eb24 at 0055eb24
 * undefined __register FUN_0055eb24(int * param_1, undefined4 param_2)
 * Address ranges: 0055eb24-0055f39c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x55e7a8 slot published:FormCreate for TfrmHighScore. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x55e7a8 slot
   published:FormCreate for TfrmHighScore. Original bytes unchanged; names and types still inferred.
    */

void FUN_0055eb24(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  int extraout_EDX_09;
  int extraout_EDX_10;
  int extraout_EDX_11;
  int extraout_EDX_12;
  int extraout_EDX_13;
  int extraout_EDX_14;
  int extraout_EDX_15;
  int extraout_EDX_16;
  int extraout_EDX_17;
  int extraout_EDX_18;
  int extraout_EDX_19;
  int extraout_EDX_20;
  int extraout_EDX_21;
  int extraout_EDX_22;
  int extraout_EDX_23;
  int extraout_EDX_24;
  int extraout_EDX_25;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_11c = &LAB_0055f39d;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_114);
  FUN_00403fd4(&local_14,local_114);
  FUN_004040f0((int *)&local_10,3);
  puVar2 = local_10;
  uVar3 = FUN_004a418c();
  FUN_004a48b8(uVar3,puVar2,0);
  FUN_00552d78(local_8,local_c);
  FUN_00432744(local_8[0xd6],*(uint **)(PTR_DAT_00572404 + 0x28));
  FUN_00431f34((int *)local_8[0xd6],0x142);
  FUN_00431f54((int *)local_8[0xd6],0x93);
  FUN_00432744(local_8[0xd7],*(uint **)(PTR_DAT_00572404 + 0x24));
  FUN_00431f34((int *)local_8[0xd7],0xa6);
  FUN_00431f54((int *)local_8[0xd7],0x93);
  FUN_00432744(local_8[0xd8],*(uint **)(PTR_DAT_00572404 + 0x70));
  FUN_00431f34((int *)local_8[0xd8],0x1d0);
  FUN_00431f54((int *)local_8[0xd8],0x93);
  FUN_00431f34((int *)local_8[0xc2],0xa6);
  FUN_00431f54((int *)local_8[0xc2],0xbb);
  FUN_00431f34((int *)local_8[0xc3],*(undefined4 *)(local_8[0xc2] + 0x30));
  FUN_00431f34((int *)local_8[0xc4],*(undefined4 *)(local_8[0xc2] + 0x30));
  FUN_00431f34((int *)local_8[0xc5],*(undefined4 *)(local_8[0xc2] + 0x30));
  FUN_00431f34((int *)local_8[0xc6],*(undefined4 *)(local_8[0xc2] + 0x30));
  FUN_00431f34((int *)local_8[199],*(undefined4 *)(local_8[0xc2] + 0x30));
  FUN_00431f34((int *)local_8[200],*(undefined4 *)(local_8[0xc2] + 0x30));
  FUN_00431f34((int *)local_8[0xc9],*(undefined4 *)(local_8[0xc2] + 0x30));
  FUN_00431f34((int *)local_8[0xca],*(undefined4 *)(local_8[0xc2] + 0x30));
  FUN_00431f34((int *)local_8[0xcb],*(undefined4 *)(local_8[0xc2] + 0x30));
  iVar1 = *(int *)(local_8[0xc2] + 0x34);
  iVar4 = iVar1 + 0x19;
  if (SCARRY4(iVar1,0x19)) {
    thunk_FUN_00402874(local_8[0xc2]);
    iVar4 = extraout_EDX;
  }
  FUN_00431f54((int *)local_8[0xc3],iVar4);
  iVar1 = *(int *)(local_8[0xc2] + 0x34);
  iVar4 = iVar1 + 0x32;
  if (SCARRY4(iVar1,0x32)) {
    thunk_FUN_00402874(local_8[0xc2]);
    iVar4 = extraout_EDX_00;
  }
  FUN_00431f54((int *)local_8[0xc4],iVar4);
  iVar1 = *(int *)(local_8[0xc2] + 0x34);
  iVar4 = iVar1 + 0x4b;
  if (SCARRY4(iVar1,0x4b)) {
    thunk_FUN_00402874(local_8[0xc2]);
    iVar4 = extraout_EDX_01;
  }
  FUN_00431f54((int *)local_8[0xc5],iVar4);
  iVar1 = *(int *)(local_8[0xc2] + 0x34);
  iVar4 = iVar1 + 100;
  if (SCARRY4(iVar1,100)) {
    thunk_FUN_00402874(local_8[0xc2]);
    iVar4 = extraout_EDX_02;
  }
  FUN_00431f54((int *)local_8[0xc6],iVar4);
  iVar1 = *(int *)(local_8[0xc2] + 0x34);
  iVar4 = iVar1 + 0x7d;
  if (SCARRY4(iVar1,0x7d)) {
    thunk_FUN_00402874(local_8[0xc2]);
    iVar4 = extraout_EDX_03;
  }
  FUN_00431f54((int *)local_8[199],iVar4);
  iVar1 = *(int *)(local_8[0xc2] + 0x34);
  iVar4 = iVar1 + 0x96;
  if (SCARRY4(iVar1,0x96)) {
    thunk_FUN_00402874(local_8[0xc2]);
    iVar4 = extraout_EDX_04;
  }
  FUN_00431f54((int *)local_8[200],iVar4);
  iVar1 = *(int *)(local_8[0xc2] + 0x34);
  iVar4 = iVar1 + 0xaf;
  if (SCARRY4(iVar1,0xaf)) {
    thunk_FUN_00402874(local_8[0xc2]);
    iVar4 = extraout_EDX_05;
  }
  FUN_00431f54((int *)local_8[0xc9],iVar4);
  iVar1 = *(int *)(local_8[0xc2] + 0x34);
  iVar4 = iVar1 + 200;
  if (SCARRY4(iVar1,200)) {
    thunk_FUN_00402874(local_8[0xc2]);
    iVar4 = extraout_EDX_06;
  }
  FUN_00431f54((int *)local_8[0xca],iVar4);
  iVar1 = *(int *)(local_8[0xc2] + 0x34);
  iVar4 = iVar1 + 0xe1;
  if (SCARRY4(iVar1,0xe1)) {
    thunk_FUN_00402874(local_8[0xc2]);
    iVar4 = extraout_EDX_07;
  }
  FUN_00431f54((int *)local_8[0xcb],iVar4);
  FUN_00431f34((int *)local_8[0xd5],0x142);
  FUN_00431f54((int *)local_8[0xd5],0xbb);
  FUN_00431f34((int *)local_8[0xcc],*(undefined4 *)(local_8[0xd5] + 0x30));
  FUN_00431f34((int *)local_8[0xcd],*(undefined4 *)(local_8[0xd5] + 0x30));
  FUN_00431f34((int *)local_8[0xce],*(undefined4 *)(local_8[0xd5] + 0x30));
  FUN_00431f34((int *)local_8[0xcf],*(undefined4 *)(local_8[0xd5] + 0x30));
  FUN_00431f34((int *)local_8[0xd0],*(undefined4 *)(local_8[0xd5] + 0x30));
  FUN_00431f34((int *)local_8[0xd1],*(undefined4 *)(local_8[0xd5] + 0x30));
  FUN_00431f34((int *)local_8[0xd2],*(undefined4 *)(local_8[0xd5] + 0x30));
  FUN_00431f34((int *)local_8[0xd3],*(undefined4 *)(local_8[0xd5] + 0x30));
  FUN_00431f34((int *)local_8[0xd4],*(undefined4 *)(local_8[0xd5] + 0x30));
  iVar1 = *(int *)(local_8[0xd5] + 0x34);
  iVar4 = iVar1 + 0x19;
  if (SCARRY4(iVar1,0x19)) {
    thunk_FUN_00402874(local_8[0xd5]);
    iVar4 = extraout_EDX_08;
  }
  FUN_00431f54((int *)local_8[0xcc],iVar4);
  iVar1 = *(int *)(local_8[0xd5] + 0x34);
  iVar4 = iVar1 + 0x32;
  if (SCARRY4(iVar1,0x32)) {
    thunk_FUN_00402874(local_8[0xd5]);
    iVar4 = extraout_EDX_09;
  }
  FUN_00431f54((int *)local_8[0xcd],iVar4);
  iVar1 = *(int *)(local_8[0xd5] + 0x34);
  iVar4 = iVar1 + 0x4b;
  if (SCARRY4(iVar1,0x4b)) {
    thunk_FUN_00402874(local_8[0xd5]);
    iVar4 = extraout_EDX_10;
  }
  FUN_00431f54((int *)local_8[0xce],iVar4);
  iVar1 = *(int *)(local_8[0xd5] + 0x34);
  iVar4 = iVar1 + 100;
  if (SCARRY4(iVar1,100)) {
    thunk_FUN_00402874(local_8[0xd5]);
    iVar4 = extraout_EDX_11;
  }
  FUN_00431f54((int *)local_8[0xcf],iVar4);
  iVar1 = *(int *)(local_8[0xd5] + 0x34);
  iVar4 = iVar1 + 0x7d;
  if (SCARRY4(iVar1,0x7d)) {
    thunk_FUN_00402874(local_8[0xd5]);
    iVar4 = extraout_EDX_12;
  }
  FUN_00431f54((int *)local_8[0xd0],iVar4);
  iVar1 = *(int *)(local_8[0xd5] + 0x34);
  iVar4 = iVar1 + 0x96;
  if (SCARRY4(iVar1,0x96)) {
    thunk_FUN_00402874(local_8[0xd5]);
    iVar4 = extraout_EDX_13;
  }
  FUN_00431f54((int *)local_8[0xd1],iVar4);
  iVar1 = *(int *)(local_8[0xd5] + 0x34);
  iVar4 = iVar1 + 0xaf;
  if (SCARRY4(iVar1,0xaf)) {
    thunk_FUN_00402874(local_8[0xd5]);
    iVar4 = extraout_EDX_14;
  }
  FUN_00431f54((int *)local_8[0xd2],iVar4);
  iVar1 = *(int *)(local_8[0xd5] + 0x34);
  iVar4 = iVar1 + 200;
  if (SCARRY4(iVar1,200)) {
    thunk_FUN_00402874(local_8[0xd5]);
    iVar4 = extraout_EDX_15;
  }
  FUN_00431f54((int *)local_8[0xd3],iVar4);
  iVar1 = *(int *)(local_8[0xd5] + 0x34);
  iVar4 = iVar1 + 0xe1;
  if (SCARRY4(iVar1,0xe1)) {
    thunk_FUN_00402874(local_8[0xd5]);
    iVar4 = extraout_EDX_16;
  }
  FUN_00431f54((int *)local_8[0xd4],iVar4);
  FUN_00431f34((int *)local_8[0xe2],0x1d0);
  FUN_00431f54((int *)local_8[0xe2],0xbb);
  FUN_00431f34((int *)local_8[0xd9],*(undefined4 *)(local_8[0xe2] + 0x30));
  FUN_00431f34((int *)local_8[0xda],*(undefined4 *)(local_8[0xe2] + 0x30));
  FUN_00431f34((int *)local_8[0xdb],*(undefined4 *)(local_8[0xe2] + 0x30));
  FUN_00431f34((int *)local_8[0xdc],*(undefined4 *)(local_8[0xe2] + 0x30));
  FUN_00431f34((int *)local_8[0xdd],*(undefined4 *)(local_8[0xe2] + 0x30));
  FUN_00431f34((int *)local_8[0xde],*(undefined4 *)(local_8[0xe2] + 0x30));
  FUN_00431f34((int *)local_8[0xdf],*(undefined4 *)(local_8[0xe2] + 0x30));
  FUN_00431f34((int *)local_8[0xe0],*(undefined4 *)(local_8[0xe2] + 0x30));
  FUN_00431f34((int *)local_8[0xe1],*(undefined4 *)(local_8[0xe2] + 0x30));
  iVar1 = *(int *)(local_8[0xe2] + 0x34);
  iVar4 = iVar1 + 0x19;
  if (SCARRY4(iVar1,0x19)) {
    thunk_FUN_00402874(local_8[0xe2]);
    iVar4 = extraout_EDX_17;
  }
  FUN_00431f54((int *)local_8[0xd9],iVar4);
  iVar1 = *(int *)(local_8[0xe2] + 0x34);
  iVar4 = iVar1 + 0x32;
  if (SCARRY4(iVar1,0x32)) {
    thunk_FUN_00402874(local_8[0xe2]);
    iVar4 = extraout_EDX_18;
  }
  FUN_00431f54((int *)local_8[0xda],iVar4);
  iVar1 = *(int *)(local_8[0xe2] + 0x34);
  iVar4 = iVar1 + 0x4b;
  if (SCARRY4(iVar1,0x4b)) {
    thunk_FUN_00402874(local_8[0xe2]);
    iVar4 = extraout_EDX_19;
  }
  FUN_00431f54((int *)local_8[0xdb],iVar4);
  iVar1 = *(int *)(local_8[0xe2] + 0x34);
  iVar4 = iVar1 + 100;
  if (SCARRY4(iVar1,100)) {
    thunk_FUN_00402874(local_8[0xe2]);
    iVar4 = extraout_EDX_20;
  }
  FUN_00431f54((int *)local_8[0xdc],iVar4);
  iVar1 = *(int *)(local_8[0xe2] + 0x34);
  iVar4 = iVar1 + 0x7d;
  if (SCARRY4(iVar1,0x7d)) {
    thunk_FUN_00402874(local_8[0xe2]);
    iVar4 = extraout_EDX_21;
  }
  FUN_00431f54((int *)local_8[0xdd],iVar4);
  iVar1 = *(int *)(local_8[0xe2] + 0x34);
  iVar4 = iVar1 + 0x96;
  if (SCARRY4(iVar1,0x96)) {
    thunk_FUN_00402874(local_8[0xe2]);
    iVar4 = extraout_EDX_22;
  }
  FUN_00431f54((int *)local_8[0xde],iVar4);
  iVar1 = *(int *)(local_8[0xe2] + 0x34);
  iVar4 = iVar1 + 0xaf;
  if (SCARRY4(iVar1,0xaf)) {
    thunk_FUN_00402874(local_8[0xe2]);
    iVar4 = extraout_EDX_23;
  }
  FUN_00431f54((int *)local_8[0xdf],iVar4);
  iVar1 = *(int *)(local_8[0xe2] + 0x34);
  iVar4 = iVar1 + 200;
  if (SCARRY4(iVar1,200)) {
    thunk_FUN_00402874(local_8[0xe2]);
    iVar4 = extraout_EDX_24;
  }
  FUN_00431f54((int *)local_8[0xe0],iVar4);
  iVar1 = *(int *)(local_8[0xe2] + 0x34);
  iVar4 = iVar1 + 0xe1;
  if (SCARRY4(iVar1,0xe1)) {
    thunk_FUN_00402874(local_8[0xe2]);
    iVar4 = extraout_EDX_25;
  }
  FUN_00431f54((int *)local_8[0xe1],iVar4);
  uVar3 = FUN_004a418c();
  FUN_004a49b0(uVar3);
  *in_FS_OFFSET = "FormCreate";
  FUN_00403dd4(&local_14,2);
  return;
}

