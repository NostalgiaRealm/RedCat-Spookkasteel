/*
 * FUN_006077da at 006077da
 * undefined FUN_006077da(void)
 * Address ranges: 006077da-00607905
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_006077da(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 *puVar4;
  int unaff_EBP;
  uint uVar5;
  float10 fVar6;
  
  FUN_0060eb4c();
  FUN_00608174(unaff_EBP + -0x1c,unaff_EBP + 0xc,unaff_EBP + 0x14,*(undefined4 *)(unaff_EBP + 0x1c),
               *(undefined4 *)(unaff_EBP + 0x20));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  cVar3 = FUN_00600aa5(unaff_EBP + 0x14);
  puVar1 = *(uint **)(unaff_EBP + 0x24);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    *(undefined1 *)(unaff_EBP + -0x2c) = *(undefined1 *)(unaff_EBP + 0x27);
    FUN_004040a0(0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(uint *)(unaff_EBP + -0x20) < *(uint *)(unaff_EBP + -0x14)) {
      FUN_00401940(*(uint *)(unaff_EBP + -0x14),0);
    }
    uVar5 = 0;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      do {
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          puVar4 = &DAT_0064a3b4;
        }
        else {
          FUN_004c4700();
          puVar4 = (undefined1 *)(*(int *)(unaff_EBP + -0x18) + uVar5);
        }
        *(undefined1 *)(unaff_EBP + 0x20) = *puVar4;
        FUN_004eeef0(1,*(undefined4 *)(unaff_EBP + 0x20));
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(unaff_EBP + -0x14));
    }
    puVar4 = *(undefined1 **)(unaff_EBP + -0x28);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    DAT_0070ff98 = 0;
    fVar6 = (float10)FUN_00609f07(puVar4,unaff_EBP + 0x1c,0);
    if ((*(undefined1 **)(unaff_EBP + 0x1c) == puVar4) || (DAT_0070ff98 != 0)) {
      **(uint **)(unaff_EBP + 0x24) = **(uint **)(unaff_EBP + 0x24) | 2;
    }
    else {
      **(double **)(unaff_EBP + 0x28) = (double)fVar6;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_004040a0(1);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_004040a0(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}

