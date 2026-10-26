/*
 * FUN_005ffd95 at 005ffd95
 * undefined FUN_005ffd95(void)
 * Address ranges: 005ffd95-00600129
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005ffd95(void)

{
  int iVar1;
  int iVar2;
  size_t _MaxCount;
  undefined1 uVar3;
  char cVar4;
  int *piVar5;
  uint uVar6;
  void *pvVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 *puVar10;
  int unaff_EBP;
  uint uVar11;
  
  FUN_0060eb4c();
  piVar5 = (int *)FUN_00600734(*(undefined4 *)(unaff_EBP + 0x18),0,1);
  FUN_005e8c90(unaff_EBP + -0x38);
  iVar1 = *piVar5;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar3 = (**(code **)(iVar1 + 8))();
  iVar1 = *(int *)(unaff_EBP + 0xc);
  puVar10 = *(undefined1 **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -0xd) = uVar3;
  *(undefined1 **)(unaff_EBP + -0x14) = puVar10;
  cVar4 = FUN_00600aa5(*(undefined4 *)(unaff_EBP + 0x10));
  if (cVar4 == '\0') {
    if (*(char *)(iVar1 + 4) == '\0') {
      Peek();
    }
    if (*(char *)(iVar1 + 5) == '+') {
      *puVar10 = 0x2b;
    }
    else {
      if (*(char *)(iVar1 + 4) == '\0') {
        Peek();
      }
      if (*(char *)(iVar1 + 5) != '-') goto LAB_005ffe1e;
      *puVar10 = 0x2d;
    }
    *(undefined1 **)(unaff_EBP + -0x14) = puVar10 + 1;
    FUN_0060045f();
  }
LAB_005ffe1e:
  uVar6 = *(uint *)(unaff_EBP + 0x14) & 0xe00;
  if (uVar6 == 0x400) {
    *(undefined4 *)(unaff_EBP + 0x14) = 8;
  }
  else if (uVar6 == 0x800) {
    *(undefined4 *)(unaff_EBP + 0x14) = 0x10;
  }
  else {
    *(uint *)(unaff_EBP + 0x14) = -(uint)(uVar6 != 0) & 10;
  }
  *(undefined1 *)(unaff_EBP + 0x1b) = 0;
  *(undefined1 *)(unaff_EBP + 0xf) = 0;
  cVar4 = FUN_00600aa5(*(undefined4 *)(unaff_EBP + 0x10));
  if (cVar4 == '\0') {
    if (*(char *)(iVar1 + 4) == '\0') {
      Peek();
    }
    if (*(char *)(iVar1 + 5) != '0') goto LAB_005ffedf;
    *(undefined1 *)(unaff_EBP + 0x1b) = 1;
    FUN_0060045f();
    cVar4 = FUN_00600aa5(*(undefined4 *)(unaff_EBP + 0x10));
    if (cVar4 != '\0') {
LAB_005ffed2:
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        *(undefined4 *)(unaff_EBP + 0x14) = 8;
        goto LAB_005ffedf;
      }
      goto LAB_005ffee5;
    }
    if (*(char *)(iVar1 + 4) == '\0') {
      Peek();
    }
    if (*(char *)(iVar1 + 5) != 'x') {
      if (*(char *)(iVar1 + 4) == '\0') {
        Peek();
      }
      if (*(char *)(iVar1 + 5) != 'X') goto LAB_005ffed2;
    }
    if ((*(int *)(unaff_EBP + 0x14) != 0) && (*(int *)(unaff_EBP + 0x14) != 0x10))
    goto LAB_005ffed2;
    *(undefined1 *)(unaff_EBP + 0x1b) = 0;
    *(undefined4 *)(unaff_EBP + 0x14) = 0x10;
    FUN_0060045f();
LAB_005ffeea:
    *(uint *)(unaff_EBP + -0x18) = ((*(int *)(unaff_EBP + 0x14) != 8) - 1 & 0xfffffff2) + 0x16;
  }
  else {
LAB_005ffedf:
    if (*(int *)(unaff_EBP + 0x14) != 0) {
LAB_005ffee5:
      if (*(int *)(unaff_EBP + 0x14) != 10) goto LAB_005ffeea;
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 10;
  }
  uVar6 = 0;
  *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x13);
  FUN_004040a0(0);
  FUN_005ae2a0(1,*(char *)(unaff_EBP + 0x1b) != '\0');
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  cVar4 = FUN_00600aa5(*(undefined4 *)(unaff_EBP + 0x10));
  if (cVar4 == '\0') {
    do {
      if (*(char *)(iVar1 + 4) == '\0') {
        Peek();
      }
      cVar4 = *(char *)(iVar1 + 5);
      _MaxCount = *(size_t *)(unaff_EBP + -0x18);
      **(char **)(unaff_EBP + -0x14) = cVar4;
      pvVar7 = _memchr("0123456789abcdefABCDEF",(int)cVar4,_MaxCount);
      if (pvVar7 == (void *)0x0) {
        if ((*(uint *)(unaff_EBP + -0x20) < uVar6) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar8 = "";
        }
        else {
          FUN_004c4700();
          pcVar8 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar6);
        }
        if ((*pcVar8 == '\0') || (*(char *)(unaff_EBP + -0xd) == '\0')) break;
        if (*(char *)(iVar1 + 4) == '\0') {
          Peek();
        }
        if (*(char *)(iVar1 + 5) != *(char *)(unaff_EBP + -0xd)) break;
        FUN_004eeef0(1,0);
        uVar6 = uVar6 + 1;
      }
      else {
        if (((*(char *)(unaff_EBP + 0xf) != '\0') || (**(char **)(unaff_EBP + -0x14) != '0')) &&
           (*(uint *)(unaff_EBP + -0x14) < iVar2 + 0x1fU)) {
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
          *(undefined1 *)(unaff_EBP + 0xf) = 1;
        }
        *(undefined1 *)(unaff_EBP + 0x1b) = 1;
        if ((*(uint *)(unaff_EBP + -0x20) < uVar6) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar8 = "";
        }
        else {
          FUN_004c4700();
          pcVar8 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar6);
        }
        if (*pcVar8 != '\x7f') {
          if ((*(uint *)(unaff_EBP + -0x20) < uVar6) || (*(int *)(unaff_EBP + -0x24) == 0)) {
            pcVar8 = "";
          }
          else {
            FUN_004c4700();
            pcVar8 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar6);
          }
          *pcVar8 = *pcVar8 + '\x01';
        }
      }
      FUN_0060045f();
      cVar4 = FUN_00600aa5(*(undefined4 *)(unaff_EBP + 0x10));
    } while (cVar4 == '\0');
    if (uVar6 != 0) {
      if ((*(uint *)(unaff_EBP + -0x20) < uVar6) || (*(int *)(unaff_EBP + -0x24) == 0)) {
        pcVar8 = "";
      }
      else {
        FUN_004c4700();
        pcVar8 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar6);
      }
      if (*pcVar8 < '\x01') {
        *(undefined1 *)(unaff_EBP + 0x1b) = 0;
      }
      else {
        uVar6 = uVar6 + 1;
      }
    }
  }
  pcVar8 = *(char **)(unaff_EBP + -0x34);
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "";
  }
  if (*(char *)(unaff_EBP + 0x1b) != '\0') {
    do {
      if ((uVar6 == 0) || (*pcVar8 == '\x7f')) break;
      uVar11 = uVar6 - 1;
      if (uVar11 == 0) {
LAB_006000ac:
        if (uVar11 == 0) {
          if (*(int *)(unaff_EBP + -0x24) == 0) {
            pcVar9 = "";
          }
          else {
            FUN_004c4700();
            pcVar9 = *(char **)(unaff_EBP + -0x24);
          }
          if (*pcVar8 < *pcVar9) goto LAB_006000d1;
        }
        if ('\0' < pcVar8[1]) {
          pcVar8 = pcVar8 + 1;
        }
      }
      else {
        if ((*(uint *)(unaff_EBP + -0x20) < uVar11) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar9 = "";
        }
        else {
          FUN_004c4700();
          pcVar9 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar11);
        }
        if (*pcVar8 == *pcVar9) goto LAB_006000ac;
LAB_006000d1:
        *(undefined1 *)(unaff_EBP + 0x1b) = 0;
      }
      uVar6 = uVar6 - 2;
    } while (*(char *)(unaff_EBP + 0x1b) != '\0');
    if (*(char *)(unaff_EBP + 0x1b) != '\0') {
      puVar10 = *(undefined1 **)(unaff_EBP + -0x14);
      if (*(char *)(unaff_EBP + 0xf) == '\0') {
        *puVar10 = 0x30;
        puVar10 = puVar10 + 1;
      }
      goto LAB_00600101;
    }
  }
  puVar10 = *(undefined1 **)(unaff_EBP + 8);
LAB_00600101:
  *puVar10 = 0;
  FUN_004040a0(1);
  FUN_004040a0(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 0x14);
}

