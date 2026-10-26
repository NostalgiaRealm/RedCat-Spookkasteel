/*
 * FUN_005c5560 at 005c5560
 * undefined FUN_005c5560(void)
 * Address ranges: 005c5560-005c55f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005c5560(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    FUN_005c5600();
  }
  iVar1 = FUN_005c56e0(param_3,local_10);
  if (iVar1 == 1) {
    FUN_005b5920();
  }
  else {
    FUN_005b30c0();
  }
  iVar1 = FUN_005c56e0(param_3,&local_1c);
  if (iVar1 == 1) {
    *(undefined4 *)(param_2 + 0x24) = local_1c;
    *(undefined4 *)(param_2 + 0x28) = local_18;
    *(undefined4 *)(param_2 + 0x2c) = local_14;
    return;
  }
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  return;
}

