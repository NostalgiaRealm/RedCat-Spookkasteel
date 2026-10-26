/*
 * FUN_00607aba at 00607aba
 * undefined FUN_00607aba(void)
 * Address ranges: 00607aba-00607bd1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_00607aba(void)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  byte *pbVar5;
  int iVar6;
  undefined4 local_3c;
  undefined4 uStack_38;
  byte *pbStack_34;
  int iStack_30;
  
  FUN_0060eb4c();
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  iStack_30 = unaff_EBP + -0x10;
  pbStack_34 = (byte *)0x607ad9;
  uStack_38 = FUN_005e7380();
  iVar6 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_30 = 1;
  pbStack_34 = (byte *)0x0;
  local_3c = 0x607ae9;
  uVar3 = FUN_006004d8();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
  iStack_30 = 0x607afb;
  std::locale::~locale((locale *)(unaff_EBP + -0x10));
  pbVar5 = *(byte **)(*(int *)(unaff_EBP + 0x20) + 4);
  if (pbVar5 == (byte *)0x0) {
    pbVar5 = &DAT_0064a3b4;
  }
  *(undefined1 *)(unaff_EBP + 0x20) = 0;
  if (*pbVar5 == 0x2d) {
    *(undefined1 *)(unaff_EBP + 0x20) = 1;
    pbVar5 = pbVar5 + 1;
  }
  bVar1 = *pbVar5;
  while ((*(byte *)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x10) + (uint)bVar1 * 2) >> 2 & 1) != 0)
  {
    bVar1 = pbVar5[iVar6 + 1];
    iVar6 = iVar6 + 1;
  }
  iStack_30 = 0;
  *(undefined1 *)(unaff_EBP + -0x2c) = *(undefined1 *)(unaff_EBP + 0x1b);
  pbStack_34 = (byte *)0x607b42;
  FUN_004040a0();
  uStack_38 = 0x607b4c;
  pbStack_34 = pbVar5;
  iStack_30 = iVar6;
  FUN_004040f0();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar6 == 0) {
    iStack_30 = 0x30;
    pbStack_34 = (byte *)0x1;
    uStack_38 = 0x607b5e;
    FUN_004eeef0();
  }
  *(undefined4 **)(unaff_EBP + -0x14) = &local_3c;
  local_3c = CONCAT31(local_3c._1_3_,*(undefined1 *)(unaff_EBP + -0x2c));
  FUN_004040a0(0);
  FUN_0040cc00(unaff_EBP + -0x2c,0,0xffffffff);
  puVar4 = (undefined4 *)
           FUN_006089e1(unaff_EBP + -0x18,*(undefined4 *)(unaff_EBP + 0xc),
                        *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                        *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + 0x1c),
                        *(undefined4 *)(unaff_EBP + 0x20));
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  uVar3 = *puVar4;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_30 = 1;
  *puVar2 = uVar3;
  puVar2[1] = puVar4[1];
  pbStack_34 = (byte *)0x607bbf;
  FUN_004040a0();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}

