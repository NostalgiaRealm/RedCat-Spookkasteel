/*
 * FUN_10020270 at 10020270
 * undefined FUN_10020270(void)
 * Address ranges: 10020270-100202dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10020270(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = param_6 + (uVar3 & 1) + ((uVar3 & 2) + (uVar3 & 0xfffffffc) * 8) * 8;
    if (iVar1 < 0x1001) {
      puVar2 = (undefined4 *)FUN_1001e5a0(DAT_104e994c);
      *puVar2 = *(undefined4 *)(param_1 + 8 + iVar1 * 4);
      *(undefined4 **)(param_1 + 8 + iVar1 * 4) = puVar2;
      puVar2[1] = param_2;
      puVar2[2] = param_3;
      puVar2[3] = param_4;
      puVar2[4] = param_5;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 8);
  return;
}

