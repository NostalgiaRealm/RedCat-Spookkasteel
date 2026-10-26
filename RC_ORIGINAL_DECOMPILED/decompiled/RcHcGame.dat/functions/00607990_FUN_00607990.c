/*
 * FUN_00607990 at 00607990
 * undefined FUN_00607990(void)
 * Address ranges: 00607990-00607ab9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_00607990(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int iVar5;
  int local_60;
  char *pcStack_5c;
  undefined8 local_58;
  
  FUN_0060eb4c();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined1 *)(unaff_EBP + -0x14) = 0;
  if (*(double *)(unaff_EBP + 0x20) < 0.0) {
    *(double *)(unaff_EBP + 0x20) = -*(double *)(unaff_EBP + 0x20);
    *(undefined1 *)(unaff_EBP + -0x14) = 1;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  while ((1e+35 <= *(double *)(unaff_EBP + 0x20) && (*(uint *)(unaff_EBP + -0x10) < 5000))) {
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 10;
    *(double *)(unaff_EBP + 0x20) = *(double *)(unaff_EBP + 0x20) * 1e-10;
  }
  *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x1f);
  local_58 = 0x6079fd;
  FUN_004040a0();
  local_58 = *(undefined8 *)(unaff_EBP + 0x20);
  local_60 = unaff_EBP + -0x50;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pcStack_5c = "%.0Lf";
  iVar3 = FUN_0060d588();
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      *(undefined1 *)(unaff_EBP + 0x24) = *(undefined1 *)(unaff_EBP + -0x50 + iVar5);
      local_58 = CONCAT44(*(undefined4 *)(unaff_EBP + 0x24),1);
      pcStack_5c = (char *)0x607a35;
      FUN_004eeef0();
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  local_58 = CONCAT44(0x30,*(undefined4 *)(unaff_EBP + -0x10));
  pcStack_5c = (char *)0x607a47;
  FUN_004eeef0();
  *(int **)(unaff_EBP + 0x24) = &local_60;
  local_60 = CONCAT31(local_60._1_3_,*(undefined1 *)(unaff_EBP + -0x28));
  FUN_004040a0(0);
  FUN_0040cc00(unaff_EBP + -0x28,0,0xffffffff);
  puVar4 = (undefined4 *)
           FUN_006089e1(unaff_EBP + 0x20,*(undefined4 *)(unaff_EBP + 0xc),
                        *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                        *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + 0x1c),
                        *(undefined4 *)(unaff_EBP + -0x14));
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  uVar2 = *puVar4;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar1 = uVar2;
  puVar1[1] = puVar4[1];
  local_58 = 0x100607aa7;
  FUN_004040a0();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}

