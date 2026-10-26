/*
 * FUN_00602c2c at 00602c2c
 * undefined FUN_00602c2c(void)
 * Address ranges: 00602c2c-00602d5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_00602c2c(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 *puVar5;
  int unaff_EBP;
  uint uVar6;
  undefined1 *puVar7;
  float10 fVar8;
  
  FUN_0060eb4c();
  FUN_006043f5(unaff_EBP + -0x1c,unaff_EBP + 0xc,unaff_EBP + 0x14,*(undefined4 *)(unaff_EBP + 0x1c),
               *(undefined4 *)(unaff_EBP + 0x20));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  cVar3 = FUN_006069c8(unaff_EBP + 0x14);
  puVar1 = *(uint **)(unaff_EBP + 0x24);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    *(undefined1 *)(unaff_EBP + -0x2c) = *(undefined1 *)(unaff_EBP + 0x23);
    FUN_004040a0(0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(uint *)(unaff_EBP + -0x20) < *(uint *)(unaff_EBP + -0x14)) {
      FUN_00401940(*(uint *)(unaff_EBP + -0x14),0);
    }
    uVar6 = 0;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      do {
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          puVar5 = &DAT_00651838;
        }
        else {
          FUN_006058d2();
          puVar5 = (undefined2 *)(*(int *)(unaff_EBP + -0x18) + uVar6 * 2);
        }
        uVar4 = FUN_00600c15(CONCAT22((short)((uint)puVar5 >> 0x10),*puVar5));
        *(undefined1 *)(unaff_EBP + 0x20) = uVar4;
        FUN_004eeef0(1,*(undefined4 *)(unaff_EBP + 0x20));
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(unaff_EBP + -0x14));
    }
    puVar7 = *(undefined1 **)(unaff_EBP + -0x28);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_0064a3b4;
    }
    DAT_0070ff98 = 0;
    fVar8 = (float10)FUN_00609f07(puVar7,unaff_EBP + 0x1c,0);
    if ((*(undefined1 **)(unaff_EBP + 0x1c) == puVar7) || (DAT_0070ff98 != 0)) {
      *puVar1 = *puVar1 | 2;
    }
    else {
      **(double **)(unaff_EBP + 0x28) = (double)fVar8;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_004040a0(1);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_00605987(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}

