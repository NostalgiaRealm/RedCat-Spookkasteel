/*
 * FUN_00602de9 at 00602de9
 * undefined FUN_00602de9(void)
 * Address ranges: 00602de9-00602f1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_00602de9(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
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
  local_58 = 0x602e56;
  FUN_00605987();
  local_58 = *(undefined8 *)(unaff_EBP + 0x20);
  local_60 = unaff_EBP + -0x50;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pcStack_5c = "%.0Lf";
  iVar2 = FUN_0060d588();
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      local_58 = CONCAT44((int)*(char *)(unaff_EBP + -0x50 + iVar5),0x602e85);
      uVar3 = FUN_0060a03a();
      local_58 = CONCAT44(uVar3,1);
      pcStack_5c = (char *)0x602e91;
      FUN_0060526c();
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  local_58 = 0x3000602e9d;
  uVar3 = FUN_0060a03a();
  local_58 = CONCAT44(uVar3,*(undefined4 *)(unaff_EBP + -0x10));
  pcStack_5c = (char *)0x602eaa;
  FUN_0060526c();
  *(int **)(unaff_EBP + 0x24) = &local_60;
  local_60 = CONCAT31(local_60._1_3_,*(undefined1 *)(unaff_EBP + -0x28));
  FUN_00605987(0);
  FUN_00605614(unaff_EBP + -0x28,0,0xffffffff);
  puVar4 = (undefined4 *)
           FUN_00604c96(unaff_EBP + 0x20,*(undefined4 *)(unaff_EBP + 0xc),
                        *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                        *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + 0x1c),
                        *(undefined4 *)(unaff_EBP + -0x14));
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  uVar3 = *puVar4;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar1 = uVar3;
  puVar1[1] = puVar4[1];
  local_58 = 0x100602f0a;
  FUN_00605987();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}

