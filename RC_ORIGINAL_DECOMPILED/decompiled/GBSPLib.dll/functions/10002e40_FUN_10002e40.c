/*
 * FUN_10002e40 at 10002e40
 * undefined FUN_10002e40(void)
 * Address ranges: 10002e40-10002e8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002e40(undefined4 param_1,undefined4 *param_2)

{
  byte *pbVar1;
  int iVar2;
  
  if (DAT_10036408 != 0) {
    (*DAT_1014e35c)(s_____Map_Portals_to_Brushes_____10036614);
  }
  for (; param_2 != (undefined4 *)0x0; param_2 = (undefined4 *)*param_2) {
    iVar2 = param_2[0xb];
    if (0 < iVar2) {
      pbVar1 = (byte *)(param_2 + 0x10);
      do {
        iVar2 = iVar2 + -1;
        *pbVar1 = *pbVar1 & 0xfb;
        pbVar1 = pbVar1 + 0x14;
      } while (iVar2 != 0);
    }
  }
  FUN_10002d90(param_1);
  return;
}

