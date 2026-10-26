/*
 * FUN_00604c96 at 00604c96
 * undefined FUN_00604c96(void)
 * Address ranges: 00604c96-00605263
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_00604c96(void)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int unaff_EBP;
  int iVar12;
  undefined2 *puVar13;
  char *pcVar14;
  
  FUN_0060eb4c();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(char *)(unaff_EBP + 0x14) == '\0') {
    uVar4 = FUN_005e7380(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    piVar5 = (int *)FUN_006062f2(uVar4,0,1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(int **)(unaff_EBP + -0x10) = piVar5;
  }
  else {
    uVar4 = FUN_005e7380(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piVar5 = (int *)FUN_006063b5(uVar4,0,1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(int **)(unaff_EBP + -0x10) = piVar5;
  }
  std::locale::~locale((locale *)(unaff_EBP + -0x30));
  uVar6 = (**(code **)(*piVar5 + 0x1c))();
  *(uint *)(unaff_EBP + 0x14) = uVar6;
  FUN_006091b3(unaff_EBP + -0x9c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (uVar6 < *(uint *)(unaff_EBP + 0x2c)) {
    pcVar7 = *(char **)(unaff_EBP + -0x98);
    pcVar14 = "";
    if (pcVar7 == (char *)0x0) {
      pcVar7 = "";
    }
    if ('\0' < *pcVar7) {
      uVar4 = (**(code **)(*piVar5 + 8))();
      if (*(int *)(unaff_EBP + -0x98) != 0) {
        pcVar14 = *(char **)(unaff_EBP + -0x98);
      }
      uVar6 = *(int *)(unaff_EBP + 0x2c) - *(int *)(unaff_EBP + 0x14);
      while (((cVar1 = *pcVar14, cVar1 != '\x7f' && ('\0' < cVar1)) && ((uint)(int)cVar1 < uVar6)))
      {
        uVar6 = uVar6 - (int)cVar1;
        FUN_0060578c(uVar6,1,uVar4);
        if ('\0' < pcVar14[1]) {
          pcVar14 = pcVar14 + 1;
        }
      }
    }
  }
  *(undefined1 *)(unaff_EBP + -0x40) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_00605987(0);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(char *)(unaff_EBP + 0x20) == '\0') {
    puVar8 = (undefined4 *)(**(code **)(**(int **)(unaff_EBP + -0x10) + 0x20))(unaff_EBP + 0x20);
    *(undefined4 *)(unaff_EBP + -0x2c) = *puVar8;
    uVar4 = FUN_006059c4(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00605614(uVar4,0,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 4;
  }
  else {
    puVar8 = (undefined4 *)(**(code **)(**(int **)(unaff_EBP + -0x10) + 0x24))(unaff_EBP + 0x20);
    *(undefined4 *)(unaff_EBP + -0x2c) = *puVar8;
    uVar4 = FUN_006059db(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00605614(uVar4,0,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 4;
  }
  FUN_00605987(1);
  *(undefined1 *)(unaff_EBP + -0x8c) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_00605987(0);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if ((*(uint *)(*(int *)(unaff_EBP + 0x18) + 0xc) & 8) != 0) {
    uVar4 = FUN_006091ca(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00605614(uVar4,0,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00605987(1);
  }
  bVar3 = false;
  uVar10 = 0;
  uVar6 = 0;
  do {
    cVar1 = *(char *)(unaff_EBP + -0x2c + uVar6);
    if (cVar1 == ' ') {
      bVar3 = true;
    }
    else if (cVar1 == '$') {
      uVar10 = uVar10 + *(int *)(unaff_EBP + -0x84);
    }
    else if (cVar1 == '+') {
      uVar10 = uVar10 + *(int *)(unaff_EBP + -0x38);
    }
    else if (cVar1 == 'v') {
      uVar2 = *(uint *)(unaff_EBP + 0x14);
      if (uVar2 < *(uint *)(unaff_EBP + 0x2c)) {
        iVar9 = 0;
      }
      else {
        iVar9 = (uVar2 - *(int *)(unaff_EBP + 0x2c)) + 1;
      }
      uVar10 = uVar10 + (uint)(uVar2 != 0) + *(int *)(unaff_EBP + 0x2c) + iVar9;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  uVar6 = *(uint *)(*(int *)(unaff_EBP + 0x18) + 0x14);
  if (((int)uVar6 < 1) || (uVar6 <= uVar10)) {
    iVar9 = 0;
  }
  else {
    iVar9 = uVar6 - uVar10;
  }
  uVar6 = *(uint *)(*(int *)(unaff_EBP + 0x18) + 0xc);
  *(int *)(unaff_EBP + 0x20) = iVar9;
  uVar6 = uVar6 & 0x1c0;
  *(uint *)(unaff_EBP + -0x7c) = uVar6;
  if ((uVar6 != 0x40) && ((uVar6 != 0x100 || (!bVar3)))) {
    *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 0x10);
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      FUN_006035a1(*(undefined4 *)(unaff_EBP + 0x1c));
    }
    *(undefined4 *)(unaff_EBP + 0x20) = 0;
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x28);
    *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x24);
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  uVar11 = *(undefined4 *)(unaff_EBP + 0x10);
  uVar4 = *(undefined4 *)(unaff_EBP + 0xc);
  do {
    cVar1 = *(char *)(unaff_EBP + -0x2c + *(int *)(unaff_EBP + -0x24));
    if (cVar1 == ' ') {
      if (*(int *)(unaff_EBP + -0x7c) == 0x100) {
        iVar9 = *(int *)(unaff_EBP + 0x20);
        *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
        *(undefined4 *)(unaff_EBP + -0x14) = uVar11;
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          FUN_006035a1(*(undefined4 *)(unaff_EBP + 0x1c));
        }
        uVar4 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar11 = *(undefined4 *)(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + 0x20) = 0;
        *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
        *(undefined4 *)(unaff_EBP + 0x10) = uVar11;
      }
      goto LAB_00605193;
    }
    if (cVar1 == '$') {
      iVar9 = *(int *)(unaff_EBP + -0x84);
      FUN_006058d2();
      puVar13 = *(undefined2 **)(unaff_EBP + -0x88);
      *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + 0x10);
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        FUN_006035a1(*puVar13);
        puVar13 = puVar13 + 1;
      }
      uVar4 = *(undefined4 *)(unaff_EBP + -0x50);
      uVar11 = *(undefined4 *)(unaff_EBP + -0x4c);
      *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
LAB_0060503d:
      *(undefined4 *)(unaff_EBP + 0x10) = uVar11;
    }
    else if (cVar1 == '+') {
      if (*(int *)(unaff_EBP + -0x38) != 0) {
        FUN_006058d2();
        *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + 0x10);
        FUN_006035a1(CONCAT22((short)((uint)*(undefined2 **)(unaff_EBP + -0x3c) >> 0x10),
                              **(undefined2 **)(unaff_EBP + -0x3c)));
        uVar4 = *(undefined4 *)(unaff_EBP + -0x58);
        uVar11 = *(undefined4 *)(unaff_EBP + -0x54);
        *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
        goto LAB_0060503d;
      }
    }
    else if (cVar1 == 'v') {
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        iVar9 = *(int *)(unaff_EBP + 0x2c);
        FUN_006058d2();
        puVar13 = *(undefined2 **)(unaff_EBP + 0x28);
        *(undefined4 *)(unaff_EBP + -0x78) = *(undefined4 *)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + 0x10);
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          FUN_006035a1(*puVar13);
          puVar13 = puVar13 + 1;
        }
        uVar4 = *(undefined4 *)(unaff_EBP + -0x78);
        uVar11 = *(undefined4 *)(unaff_EBP + -0x74);
        *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
      }
      else {
        uVar6 = *(uint *)(unaff_EBP + 0x2c);
        if (*(uint *)(unaff_EBP + 0x14) < uVar6) {
          FUN_006058d2();
          iVar9 = *(int *)(unaff_EBP + 0x14);
          puVar13 = *(undefined2 **)(unaff_EBP + 0x28);
          *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(unaff_EBP + 0xc);
          *(undefined4 *)(unaff_EBP + -100) = *(undefined4 *)(unaff_EBP + 0x10);
          for (iVar12 = uVar6 - iVar9; iVar12 != 0; iVar12 = iVar12 + -1) {
            FUN_006035a1(*puVar13);
            puVar13 = puVar13 + 1;
          }
          *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x68);
          *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -100);
          uVar4 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 4))();
          FUN_006035a1(uVar4);
          FUN_006058d2();
          puVar13 = (undefined2 *)
                    ((-(uint)(*(int *)(unaff_EBP + 0x28) != 0) &
                     *(int *)(unaff_EBP + 0x28) + *(int *)(unaff_EBP + 0x2c) * 2) + iVar9 * -2);
          *(undefined4 *)(unaff_EBP + -0x70) = *(undefined4 *)(unaff_EBP + 0xc);
          *(undefined4 *)(unaff_EBP + -0x6c) = *(undefined4 *)(unaff_EBP + 0x10);
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            FUN_006035a1(*puVar13);
            puVar13 = puVar13 + 1;
          }
          uVar4 = *(undefined4 *)(unaff_EBP + -0x70);
          uVar11 = *(undefined4 *)(unaff_EBP + -0x6c);
          *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
        }
        else {
          uVar4 = FUN_0060a03a(0x30);
          FUN_006035a1(uVar4);
          uVar4 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 4))();
          FUN_006035a1(uVar4);
          iVar9 = *(int *)(unaff_EBP + 0x14);
          iVar12 = *(int *)(unaff_EBP + 0x2c);
          uVar4 = FUN_0060a03a(0x30);
          *(undefined4 *)(unaff_EBP + -0x60) = *(undefined4 *)(unaff_EBP + 0xc);
          *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(unaff_EBP + 0x10);
          for (iVar9 = iVar9 - iVar12; iVar9 != 0; iVar9 = iVar9 + -1) {
            FUN_006035a1(uVar4);
          }
          iVar9 = *(int *)(unaff_EBP + 0x2c);
          *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x60);
          *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x5c);
          FUN_006058d2();
          puVar13 = *(undefined2 **)(unaff_EBP + 0x28);
          *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + 0xc);
          *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + 0x10);
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            FUN_006035a1(*puVar13);
            puVar13 = puVar13 + 1;
          }
          uVar4 = *(undefined4 *)(unaff_EBP + -0x48);
          uVar11 = *(undefined4 *)(unaff_EBP + -0x44);
          *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
        }
      }
      goto LAB_0060503d;
    }
LAB_00605193:
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
    if (3 < *(uint *)(unaff_EBP + -0x24)) {
      uVar6 = *(uint *)(unaff_EBP + -0x38);
      if (1 < uVar6) {
        FUN_006058d2();
        puVar13 = *(undefined2 **)(unaff_EBP + -0x3c);
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0x10);
        while (uVar6 = uVar6 - 1, uVar6 != 0) {
          puVar13 = puVar13 + 1;
          FUN_006035a1(*puVar13);
        }
        uVar4 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar11 = *(undefined4 *)(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
        *(undefined4 *)(unaff_EBP + 0x10) = uVar11;
      }
      iVar9 = *(int *)(unaff_EBP + 0x20);
      *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
      *(undefined4 *)(unaff_EBP + -0x14) = uVar11;
      *(undefined4 *)(*(int *)(unaff_EBP + 0x18) + 0x14) = 0;
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        FUN_006035a1(*(undefined4 *)(unaff_EBP + 0x1c));
      }
      puVar8 = *(undefined4 **)(unaff_EBP + 8);
      *puVar8 = *(undefined4 *)(unaff_EBP + -0x18);
      puVar8[1] = *(undefined4 *)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00605987(1);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00605987(1);
      FUN_004040a0(1);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00605987(1);
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return puVar8;
    }
  } while( true );
}

