/*
 * FUN_0040ecbc at 0040ecbc
 * int __register FUN_0040ecbc(void)
 * Address ranges: 0040ecbc-0040ed76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0040ecbc(void)

{
  byte bVar1;
  byte bVar2;
  undefined3 uVar4;
  undefined2 uVar5;
  uint uVar3;
  uint uVar6;
  int iVar7;
  int unaff_EBP;
  byte *pbVar8;
  byte *pbVar10;
  byte bVar11;
  byte *pbVar9;
  
  bVar11 = 0;
  if (*(char *)(unaff_EBP + -0xc) == '\0') {
    uVar3 = (uint)*(short *)(unaff_EBP + -0x40);
    if ((int)uVar3 <= *(int *)(unaff_EBP + -0x18)) {
      uVar3 = *(uint *)(unaff_EBP + -0x18);
    }
    iVar7 = (int)*(short *)(unaff_EBP + -0x40) - *(int *)(unaff_EBP + -0x18);
  }
  else {
    uVar3 = *(uint *)(unaff_EBP + -0x18);
    iVar7 = 0;
  }
  *(uint *)(unaff_EBP + -0x24) = uVar3;
  *(int *)(unaff_EBP + -0x28) = iVar7;
  pbVar9 = *(byte **)(unaff_EBP + -0x10);
  pbVar10 = *(byte **)(unaff_EBP + -4);
  if ((*(char *)(unaff_EBP + -0x3e) != '\0') && (pbVar9 == *(byte **)(unaff_EBP + 8))) {
    *pbVar10 = 0x2d;
    uVar3 = CONCAT31((int3)(uVar3 >> 8),0x2d);
    pbVar10 = pbVar10 + 1;
  }
LAB_0040ecf9:
  do {
    while( true ) {
      do {
        while( true ) {
          uVar6 = uVar3;
          pbVar8 = pbVar9 + (uint)bVar11 * -2 + 1;
          bVar1 = *pbVar9;
          uVar4 = (undefined3)(uVar6 >> 8);
          uVar3 = CONCAT31(uVar4,bVar1);
          pbVar9 = pbVar8;
          if ((bVar1 != 0x23) && (bVar1 != 0x30)) break;
          uVar3 = FUN_0040ed77();
        }
      } while ((bVar1 == 0x2e) || (bVar1 == 0x2c));
      uVar5 = (undefined2)(uVar6 >> 0x10);
      if ((bVar1 != 0x27) && (bVar1 != 0x22)) break;
      while( true ) {
        bVar2 = *pbVar8;
        uVar3 = CONCAT31(CONCAT21(uVar5,bVar1),bVar2);
        pbVar9 = pbVar8 + (uint)bVar11 * -2 + 1;
        if (bVar2 == bVar1) break;
        if (bVar2 == 0) goto LAB_0040ed71;
        *pbVar10 = bVar2;
        pbVar8 = pbVar8 + (uint)bVar11 * -2 + 1;
        pbVar10 = pbVar10 + (uint)bVar11 * -2 + 1;
      }
    }
    if ((bVar1 == 0x45) || (bVar1 == 0x65)) {
      bVar2 = *pbVar8;
      uVar3 = CONCAT22(uVar5,CONCAT11(bVar2,bVar1));
      if (bVar2 == 0x2b) break;
      if (bVar2 == 0x2d) {
        uVar3 = CONCAT22(uVar5,(ushort)bVar1);
        break;
      }
    }
    else if ((bVar1 == 0x3b) || (uVar3 = CONCAT31(uVar4,bVar1), bVar1 == 0)) {
LAB_0040ed71:
      return (int)pbVar10 - *(int *)(unaff_EBP + -4);
    }
    *pbVar10 = (byte)uVar3;
    pbVar10 = pbVar10 + (uint)bVar11 * -2 + 1;
  } while( true );
  uVar6 = 0xffffffff;
  do {
    uVar6 = uVar6 + 1;
    pbVar8 = pbVar8 + 1;
  } while (*pbVar8 == 0x30);
  if (3 < uVar6) {
    uVar6 = 4;
  }
  uVar3 = FUN_0040e998(uVar3,(int)*(short *)(unaff_EBP + -0x40) - *(int *)(unaff_EBP + -0x18),uVar6)
  ;
  pbVar9 = pbVar8;
  goto LAB_0040ecf9;
}

