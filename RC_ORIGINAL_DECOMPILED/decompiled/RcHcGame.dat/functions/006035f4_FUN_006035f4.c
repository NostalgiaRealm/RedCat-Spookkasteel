/*
 * FUN_006035f4 at 006035f4
 * undefined FUN_006035f4(void)
 * Address ranges: 006035f4-006039c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_006035f4(void)

{
  int iVar1;
  int iVar2;
  size_t _MaxCount;
  char cVar3;
  short sVar4;
  short sVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined2 uVar13;
  undefined2 extraout_var;
  void *pvVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 *puVar12;
  int unaff_EBP;
  uint uVar14;
  
  FUN_0060eb4c();
  sVar4 = FUN_0060a03a(0x30);
  piVar6 = (int *)FUN_00605f2b(*(undefined4 *)(unaff_EBP + 0x18),0,1);
  FUN_006055fd(unaff_EBP + -0x38);
  iVar1 = *piVar6;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar7 = (**(code **)(iVar1 + 8))();
  iVar1 = *(int *)(unaff_EBP + 0xc);
  puVar12 = *(undefined1 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x18) = uVar7;
  *(undefined1 **)(unaff_EBP + -0x10) = puVar12;
  cVar3 = FUN_006069c8(*(undefined4 *)(unaff_EBP + 0x10));
  if (cVar3 == '\0') {
    if (*(char *)(iVar1 + 4) == '\0') {
      Peek();
    }
    sVar5 = FUN_0060a03a(0x2b);
    if (*(short *)(iVar1 + 6) == sVar5) {
      *puVar12 = 0x2b;
    }
    else {
      if (*(char *)(iVar1 + 4) == '\0') {
        Peek();
      }
      sVar5 = FUN_0060a03a(0x2d);
      if (*(short *)(iVar1 + 6) != sVar5) goto LAB_00603696;
      *puVar12 = 0x2d;
    }
    *(undefined1 **)(unaff_EBP + -0x10) = puVar12 + 1;
    FUN_00605560();
  }
LAB_00603696:
  uVar8 = *(uint *)(unaff_EBP + 0x14) & 0xe00;
  if (uVar8 == 0x400) {
    *(undefined4 *)(unaff_EBP + 0x14) = 8;
  }
  else if (uVar8 == 0x800) {
    *(undefined4 *)(unaff_EBP + 0x14) = 0x10;
  }
  else {
    *(uint *)(unaff_EBP + 0x14) = -(uint)(uVar8 != 0) & 10;
  }
  *(undefined1 *)(unaff_EBP + 0x1b) = 0;
  *(undefined1 *)(unaff_EBP + 0xf) = 0;
  cVar3 = FUN_006069c8(*(undefined4 *)(unaff_EBP + 0x10));
  if (cVar3 == '\0') {
    if (*(char *)(iVar1 + 4) == '\0') {
      Peek();
    }
    if (*(short *)(iVar1 + 6) != sVar4) goto LAB_00603769;
    *(undefined1 *)(unaff_EBP + 0x1b) = 1;
    FUN_00605560();
    cVar3 = FUN_006069c8(*(undefined4 *)(unaff_EBP + 0x10));
    if (cVar3 != '\0') {
LAB_0060375c:
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        *(undefined4 *)(unaff_EBP + 0x14) = 8;
        goto LAB_00603769;
      }
      goto LAB_0060376f;
    }
    if (*(char *)(iVar1 + 4) == '\0') {
      Peek();
    }
    sVar4 = FUN_0060a03a(0x78);
    if (*(short *)(iVar1 + 6) != sVar4) {
      if (*(char *)(iVar1 + 4) == '\0') {
        Peek();
      }
      sVar4 = FUN_0060a03a(0x58);
      if (*(short *)(iVar1 + 6) != sVar4) goto LAB_0060375c;
    }
    if ((*(int *)(unaff_EBP + 0x14) != 0) && (*(int *)(unaff_EBP + 0x14) != 0x10))
    goto LAB_0060375c;
    *(undefined1 *)(unaff_EBP + 0x1b) = 0;
    *(undefined4 *)(unaff_EBP + 0x14) = 0x10;
    FUN_00605560();
LAB_00603775:
    *(uint *)(unaff_EBP + -0x14) = ((*(int *)(unaff_EBP + 0x14) != 8) - 1 & 0xfffffff2) + 0x16;
  }
  else {
LAB_00603769:
    if (*(int *)(unaff_EBP + 0x14) != 0) {
LAB_0060376f:
      if (*(int *)(unaff_EBP + 0x14) != 10) goto LAB_00603775;
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 10;
  }
  uVar8 = 0;
  *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x13);
  FUN_004040a0(0);
  FUN_005ae2a0(1,*(char *)(unaff_EBP + 0x1b) != '\0');
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uVar7 = FUN_006069c8(*(undefined4 *)(unaff_EBP + 0x10));
  if ((char)uVar7 == '\0') {
    do {
      uVar13 = (undefined2)((uint)uVar7 >> 0x10);
      if (*(char *)(iVar1 + 4) == '\0') {
        Peek();
        uVar13 = extraout_var;
      }
      cVar3 = FUN_00600c15(CONCAT22(uVar13,*(undefined2 *)(iVar1 + 6)));
      _MaxCount = *(size_t *)(unaff_EBP + -0x14);
      **(char **)(unaff_EBP + -0x10) = cVar3;
      pvVar9 = _memchr("0123456789abcdefABCDEF",(int)cVar3,_MaxCount);
      if (pvVar9 == (void *)0x0) {
        if ((*(uint *)(unaff_EBP + -0x20) < uVar8) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar10 = "";
        }
        else {
          FUN_004c4700();
          pcVar10 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar8);
        }
        if ((*pcVar10 == '\0') || (*(short *)(unaff_EBP + -0x18) == 0)) break;
        if (*(char *)(iVar1 + 4) == '\0') {
          Peek();
        }
        if (*(short *)(iVar1 + 6) != *(short *)(unaff_EBP + -0x18)) break;
        FUN_004eeef0(1,0);
        uVar8 = uVar8 + 1;
      }
      else {
        if (((*(char *)(unaff_EBP + 0xf) != '\0') || (**(char **)(unaff_EBP + -0x10) != '0')) &&
           (*(uint *)(unaff_EBP + -0x10) < iVar2 + 0x1fU)) {
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
          *(undefined1 *)(unaff_EBP + 0xf) = 1;
        }
        *(undefined1 *)(unaff_EBP + 0x1b) = 1;
        if ((*(uint *)(unaff_EBP + -0x20) < uVar8) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar10 = "";
        }
        else {
          FUN_004c4700();
          pcVar10 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar8);
        }
        if (*pcVar10 != '\x7f') {
          if ((*(uint *)(unaff_EBP + -0x20) < uVar8) || (*(int *)(unaff_EBP + -0x24) == 0)) {
            pcVar10 = "";
          }
          else {
            FUN_004c4700();
            pcVar10 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar8);
          }
          *pcVar10 = *pcVar10 + '\x01';
        }
      }
      FUN_00605560();
      uVar7 = FUN_006069c8(*(undefined4 *)(unaff_EBP + 0x10));
    } while ((char)uVar7 == '\0');
    if (uVar8 != 0) {
      if ((*(uint *)(unaff_EBP + -0x20) < uVar8) || (*(int *)(unaff_EBP + -0x24) == 0)) {
        pcVar10 = "";
      }
      else {
        FUN_004c4700();
        pcVar10 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar8);
      }
      if (*pcVar10 < '\x01') {
        *(undefined1 *)(unaff_EBP + 0x1b) = 0;
      }
      else {
        uVar8 = uVar8 + 1;
      }
    }
  }
  pcVar10 = *(char **)(unaff_EBP + -0x34);
  if (pcVar10 == (char *)0x0) {
    pcVar10 = "";
  }
  if (*(char *)(unaff_EBP + 0x1b) != '\0') {
    do {
      if ((uVar8 == 0) || (*pcVar10 == '\x7f')) break;
      uVar14 = uVar8 - 1;
      if (uVar14 == 0) {
LAB_00603945:
        if (uVar14 == 0) {
          if (*(int *)(unaff_EBP + -0x24) == 0) {
            pcVar11 = "";
          }
          else {
            FUN_004c4700();
            pcVar11 = *(char **)(unaff_EBP + -0x24);
          }
          if (*pcVar10 < *pcVar11) goto LAB_0060396a;
        }
        if ('\0' < pcVar10[1]) {
          pcVar10 = pcVar10 + 1;
        }
      }
      else {
        if ((*(uint *)(unaff_EBP + -0x20) < uVar14) || (*(int *)(unaff_EBP + -0x24) == 0)) {
          pcVar11 = "";
        }
        else {
          FUN_004c4700();
          pcVar11 = (char *)(*(int *)(unaff_EBP + -0x24) + uVar14);
        }
        if (*pcVar10 == *pcVar11) goto LAB_00603945;
LAB_0060396a:
        *(undefined1 *)(unaff_EBP + 0x1b) = 0;
      }
      uVar8 = uVar8 - 2;
    } while (*(char *)(unaff_EBP + 0x1b) != '\0');
    if (*(char *)(unaff_EBP + 0x1b) != '\0') {
      puVar12 = *(undefined1 **)(unaff_EBP + -0x10);
      if (*(char *)(unaff_EBP + 0xf) == '\0') {
        *puVar12 = 0x30;
        puVar12 = puVar12 + 1;
      }
      goto LAB_0060399a;
    }
  }
  puVar12 = *(undefined1 **)(unaff_EBP + 8);
LAB_0060399a:
  *puVar12 = 0;
  FUN_004040a0(1);
  FUN_004040a0(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 0x14);
}

