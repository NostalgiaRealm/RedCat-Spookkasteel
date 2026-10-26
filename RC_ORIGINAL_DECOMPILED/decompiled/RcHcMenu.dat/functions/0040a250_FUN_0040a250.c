/*
 * FUN_0040a250 at 0040a250
 * undefined __register FUN_0040a250(char * param_1, char * param_2)
 * Address ranges: 0040a250-0040a28f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040a250(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined3 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  bool bVar9;
  
  uVar6 = 0xffffffff;
  iVar4 = 0;
  pcVar8 = param_2;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  bVar9 = true;
LAB_0040a265:
  do {
    if (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      pcVar1 = param_2 + 1;
      pcVar8 = param_1 + 1;
      bVar9 = *param_1 == *param_2;
      param_1 = pcVar8;
      param_2 = pcVar1;
      if (bVar9) goto LAB_0040a265;
    }
    if (bVar9) {
      return;
    }
    bVar3 = param_1[-1];
    uVar5 = (undefined3)((uint)iVar4 >> 8);
    iVar4 = CONCAT31(uVar5,bVar3);
    if ((0x60 < bVar3) && (bVar3 < 0x7b)) {
      iVar4 = CONCAT31(uVar5,bVar3 - 0x20);
    }
    bVar3 = param_2[-1];
    uVar7 = (uint)bVar3;
    if ((0x60 < bVar3) && (bVar3 < 0x7b)) {
      uVar7 = (uint)(byte)(bVar3 - 0x20);
    }
    iVar4 = iVar4 - uVar7;
    bVar9 = iVar4 == 0;
    if (!bVar9) {
      return;
    }
  } while( true );
}

