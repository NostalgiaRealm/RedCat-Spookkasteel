/*
 * FUN_1000b120 at 1000b120
 * undefined FUN_1000b120(void)
 * Address ranges: 1000b120-1000b1a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b120(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_10014310(0xc);
      *puVar2 = *(undefined4 *)(param_1 + 8);
      *(undefined4 **)(param_1 + 8) = puVar2;
      uVar3 = FUN_1000b300(param_2);
      puVar2[1] = uVar3;
      uVar3 = FUN_1000b300(param_3);
      puVar2[2] = uVar3;
      return;
    }
    iVar1 = FUN_100332c0(puVar2[1],param_2);
    if (iVar1 == 0) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  FUN_10014360(puVar2[2]);
  puVar2[2] = 0;
  _DAT_1003fde8 = 0;
  uVar3 = FUN_1000b300(param_3);
  puVar2[2] = uVar3;
  return;
}

