/*
 * FUN_100139a0 at 100139a0
 * undefined FUN_100139a0(void)
 * Address ranges: 100139a0-10013a64
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100139a0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  
  iVar4 = (param_2 - DAT_104e98b4) / 0x44;
  if ((DAT_1014e350 == 0) && (*(char *)(DAT_104e98d4 + iVar4) == '\0')) {
    *(undefined1 *)(DAT_104e98d4 + iVar4) = 1;
    iVar2 = *(int *)(param_2 + 0x34);
    pbVar5 = (byte *)(*(int *)(param_1 + 0x2c) + (iVar4 >> 3));
    bVar1 = *pbVar5;
    bVar6 = (byte)(1 << ((byte)iVar4 & 7));
    if ((bVar6 & bVar1) == 0) {
      *pbVar5 = bVar1 | bVar6;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      *(int *)(DAT_104e98d0 + 4 + DAT_104e98ec * 0xc) =
           *(int *)(DAT_104e98d0 + 4 + DAT_104e98ec * 0xc) + 1;
      DAT_104e98f0 = DAT_104e98f0 + 1;
    }
    for (puVar3 = *(undefined4 **)(DAT_104e98d0 + iVar2 * 0xc); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)*puVar3) {
      iVar4 = FUN_10013b20(param_1,puVar3);
      if (iVar4 != 0) {
        FUN_100139a0(param_1,puVar3);
      }
    }
  }
  return;
}

