/*
 * FUN_00422d30 at 00422d30
 * undefined __register FUN_00422d30(void)
 * Address ranges: 00422d30-00422d91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00422d30(void)

{
  BYTE BVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  byte bVar5;
  
  bVar5 = 0;
  iVar2 = MulDiv(8,DAT_00573658,0x48);
  DAT_0056f3e8 = -iVar2;
  if (PTR_DAT_0057261c[8] != '\0') {
    BVar1 = FUN_00422cec();
    if (BVar1 == 0x80) {
      puVar3 = &DAT_00422d94;
      pcVar4 = s_MS_Sans_Serif_0056f3ef;
      for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pcVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
      }
      iVar2 = MulDiv(9,DAT_00573658,0x48);
      DAT_0056f3e8 = -iVar2;
      DAT_0056f3ee = 0x80;
    }
  }
  return;
}

