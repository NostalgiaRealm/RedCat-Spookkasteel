/*
 * FUN_005ca6b0 at 005ca6b0
 * undefined FUN_005ca6b0(void)
 * Address ranges: 005ca6b0-005ca80f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_005ca6b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,int *param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  DAT_006cc590 = *(int *)(param_1 + 0x18) + 200;
  DAT_006cc50c = -1;
  iVar3 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 0x18) + 0x168)) {
    iVar2 = 0;
    do {
      FUN_005b2fe0(local_24);
      FUN_005b2fe0(local_30);
      FUN_005b3730(local_18);
      FUN_005b3730(local_c);
      FUN_005b3000(local_24);
      FUN_005b3000(local_30);
      DAT_006cc5ac = 0;
      iVar1 = FUN_005ca810(local_24,local_30,*(undefined4 *)(*(int *)(DAT_006cc590 + 0x48) + iVar2))
      ;
      if (iVar1 != 0) {
        if (DAT_006cc50c == -1) {
          return 0;
        }
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = DAT_006cc560;
          param_4[1] = DAT_006cc564;
          param_4[2] = DAT_006cc568;
        }
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = DAT_006cc4cc;
        }
        if (param_6 != (int *)0x0) {
          *param_6 = DAT_006cc50c;
        }
        if (param_7 != (undefined4 *)0x0) {
          *param_7 = DAT_006cc594;
        }
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x50;
    } while (iVar3 < *(int *)(DAT_006cc590 + 0xa0));
  }
  return 0;
}

