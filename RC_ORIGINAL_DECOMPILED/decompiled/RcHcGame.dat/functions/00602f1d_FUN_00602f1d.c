/*
 * FUN_00602f1d at 00602f1d
 * undefined FUN_00602f1d(void)
 * Address ranges: 00602f1d-00603058
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_00602f1d(void)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 extraout_ECX;
  short *psVar7;
  int unaff_EBP;
  short *psVar8;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  short *psStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  
  FUN_0060eb4c();
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  iStack_30 = unaff_EBP + -0x14;
  uStack_34 = 0x602f3c;
  uStack_38 = FUN_005e7380();
  iStack_30 = 1;
  uStack_34 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  psStack_3c = (short *)0x602f4a;
  piVar4 = (int *)FUN_00605cd2();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_30 = 0x602f5b;
  std::locale::~locale((locale *)(unaff_EBP + -0x14));
  psVar8 = *(short **)(*(int *)(unaff_EBP + 0x20) + 4);
  if (psVar8 == (short *)0x0) {
    psVar8 = &DAT_00651838;
  }
  *(undefined1 *)(unaff_EBP + -0x10) = 0;
  iStack_30 = 0x2d;
  uStack_34 = 0x602f75;
  uVar5 = FUN_0060a03a();
  if (*psVar8 == (short)uVar5) {
    *(undefined1 *)(unaff_EBP + -0x10) = 1;
    psVar8 = psVar8 + 1;
  }
  iStack_30 = CONCAT22((short)((uint)uVar5 >> 0x10),*psVar8);
  iVar1 = *piVar4;
  uStack_34 = 4;
  *(undefined4 *)(unaff_EBP + 0x20) = 0;
  uStack_38 = 0x602f91;
  uVar5 = (**(code **)(iVar1 + 8))();
  cVar3 = (char)uVar5;
  psVar7 = psVar8;
  while (cVar3 != '\0') {
    *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) + 1;
    psVar7 = psVar7 + 1;
    uStack_38 = CONCAT22((short)((uint)uVar5 >> 0x10),*psVar7);
    psStack_3c = (short *)0x4;
    uStack_40 = 0x602fa9;
    uVar5 = (**(code **)(*piVar4 + 8))();
    cVar3 = (char)uVar5;
  }
  uStack_38 = 0;
  *(undefined1 *)(unaff_EBP + -0x2c) = *(undefined1 *)(unaff_EBP + 0x1b);
  psStack_3c = (short *)0x602fbe;
  FUN_00605987();
  uStack_38 = *(undefined4 *)(unaff_EBP + 0x20);
  uStack_40 = 0x602fca;
  psStack_3c = psVar8;
  FUN_006056f2();
  uStack_38 = 1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0x20) == 0) {
    uStack_38 = 0x30;
    psStack_3c = (short *)0x602fdc;
    uStack_38 = FUN_0060a03a();
    psStack_3c = (short *)0x1;
    uStack_40 = 0x602fe7;
    FUN_0060526c();
  }
  auStack_44[0] = *(undefined1 *)(unaff_EBP + -0x2c);
  *(undefined1 **)(unaff_EBP + 0x20) = auStack_44;
  FUN_00605987(0);
  FUN_00605614(unaff_EBP + -0x2c,0,0xffffffff);
  puVar6 = (undefined4 *)
           FUN_00604c96(unaff_EBP + -0x18,*(undefined4 *)(unaff_EBP + 0xc),
                        *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                        *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + 0x1c),
                        *(undefined4 *)(unaff_EBP + -0x10));
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  uVar5 = *puVar6;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_38 = 1;
  *puVar2 = uVar5;
  puVar2[1] = puVar6[1];
  psStack_3c = (short *)0x603046;
  FUN_00605987();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}

