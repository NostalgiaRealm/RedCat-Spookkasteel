/*
 * FUN_004358f8 at 004358f8
 * undefined __register FUN_004358f8(int * param_1, int * param_2)
 * Address ranges: 004358f8-00435a15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004358f8(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  HCURSOR pHVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_108 [256];
  undefined *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_11c = &LAB_00435a16;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402cfc(param_2,0x8c,0);
  *param_2 = param_1[0x15];
  param_2[1] = 0x44000000;
  FUN_00435890(param_1,(uint *)(param_2 + 2));
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    param_2[1] = param_2[1] | 0x2000000;
    param_2[2] = param_2[2] | 0x10000;
  }
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    if (cVar1 == '\0') {
      param_2[1] = param_2[1] | 0x8000000;
    }
  }
  if ((char)param_1[0x5d] != '\0') {
    param_2[1] = param_2[1] | 0x10000;
  }
  param_2[3] = param_1[0xc];
  param_2[4] = param_1[0xd];
  param_2[5] = param_1[0xe];
  param_2[6] = param_1[0xf];
  if ((int *)param_1[9] == (int *)0x0) {
    param_2[7] = param_1[0x59];
  }
  else {
    iVar2 = FUN_00438988((int *)param_1[9]);
    param_2[7] = iVar2;
  }
  param_2[9] = 0xb;
  param_2[10] = (int)DefWindowProcA;
  pHVar3 = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
  param_2[0xf] = (int)pHVar3;
  param_2[0x10] = 0;
  param_2[0xd] = DAT_005734dc;
  FUN_00402fe0(*param_1,local_108);
  FUN_00403fd4((int *)&local_8,local_108);
  FUN_0040a1cc((char *)(param_2 + 0x13),local_8);
  *in_FS_OFFSET = uStack_120;
  puStack_118 = &LAB_00435a1d;
  puStack_11c = (undefined1 *)0x435a15;
  FUN_00403db0((int *)&local_8);
  return;
}

