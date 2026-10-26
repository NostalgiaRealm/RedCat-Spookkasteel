/*
 * FUN_005d5d90 at 005d5d90
 * undefined FUN_005d5d90(void)
 * Address ranges: 005d5d90-005d5dee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d5d90(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int local_c [3];
  
  do {
    iVar1 = FUN_005d5df0(param_2,local_c,param_1);
    if (iVar1 == 0) {
      FUN_005cf220(0x37,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006ac5d4 + 8,0x1f5,
                   &DAT_006b3f70,0);
      return 0;
    }
  } while (local_c[0] != 0xffff);
  return 1;
}

