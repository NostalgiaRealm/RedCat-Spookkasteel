/*
 * FUN_00608174 at 00608174
 * undefined FUN_00608174(void)
 * Address ranges: 00608174-006089e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_00608174(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int iVar10;
  int unaff_EBP;
  uint uVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  
  FUN_0060eb4c();
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  if (*(char *)(unaff_EBP + 0x14) == '\0') {
    uVar6 = FUN_005e7380(unaff_EBP + -0x48);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    piVar7 = (int *)FUN_00609643(uVar6,0,1);
    *(int **)(unaff_EBP + -0x28) = piVar7;
  }
  else {
    uVar6 = FUN_005e7380(unaff_EBP + -0x48);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    piVar7 = (int *)FUN_00609706(uVar6,0,1);
    *(int **)(unaff_EBP + -0x28) = piVar7;
  }
  std::locale::~locale((locale *)(unaff_EBP + -0x48));
  uVar6 = FUN_005e7380(unaff_EBP + -0x70);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  uVar6 = FUN_006004d8(uVar6,0,1);
  *(undefined4 *)(unaff_EBP + -0x30) = uVar6;
  std::locale::~locale((locale *)(unaff_EBP + -0x70));
  *(undefined1 *)(unaff_EBP + 0x17) = 0;
  *(undefined1 *)(unaff_EBP + -0xd) = 0;
  *(undefined1 *)(unaff_EBP + -0x40) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_004040a0(0);
  *(undefined4 *)(unaff_EBP + -4) = 3;
  *(undefined1 *)(unaff_EBP + -0x6c) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_004040a0(0);
  iVar13 = *piVar7;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puVar8 = (undefined4 *)(**(code **)(iVar13 + 0x24))(unaff_EBP + -0x44);
  puVar1 = *(undefined4 **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x78) = *puVar8;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  do {
    uVar11 = *(uint *)(unaff_EBP + -0x2c);
    if (3 < uVar11) break;
    cVar4 = *(char *)(unaff_EBP + -0x78 + uVar11);
    if (cVar4 == '$') {
      FUN_006091ca(unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if ((*(byte *)(*(int *)(unaff_EBP + 0x18) + 0xc) & 8) == 0) {
        if (((*(int *)(unaff_EBP + -0x2c) != 3) || (*(int *)(unaff_EBP + -0x38) != 0)) &&
           (cVar4 = FUN_00600aa5(*(undefined4 *)(unaff_EBP + 0x10)), cVar4 == '\0')) {
          if (*(char *)(puVar1 + 1) == '\0') {
            Peek();
          }
          pcVar14 = *(char **)(unaff_EBP + -0x58);
          if (pcVar14 == (char *)0x0) {
            pcVar14 = "";
          }
          if (*(char *)((int)puVar1 + 5) == *pcVar14) goto LAB_00608862;
        }
        FUN_0040c9b0(0,0xffffffff);
      }
LAB_00608862:
      FUN_004c4700();
      for (pcVar14 = *(char **)(unaff_EBP + -0x58);
          (cVar4 = FUN_00600aa5(*(undefined4 *)(unaff_EBP + 0x10)), cVar4 == '\0' &&
          (FUN_004c4700(),
          pcVar14 !=
          (char *)(-(uint)(*(int *)(unaff_EBP + -0x58) != 0) &
                  *(int *)(unaff_EBP + -0x54) + *(int *)(unaff_EBP + -0x58))));
          pcVar14 = pcVar14 + 1) {
        if (*(char *)(puVar1 + 1) == '\0') {
          Peek();
        }
        if (*(char *)((int)puVar1 + 5) != *pcVar14) break;
        FUN_0060045f();
      }
      FUN_004c4700();
      if (pcVar14 !=
          (char *)(-(uint)(*(int *)(unaff_EBP + -0x58) != 0) &
                  *(int *)(unaff_EBP + -0x54) + *(int *)(unaff_EBP + -0x58))) {
        *(undefined1 *)(unaff_EBP + 0x17) = 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_004040a0(1);
    }
    else if (cVar4 == '+') {
      cVar4 = FUN_00600aa5(*(undefined4 *)(unaff_EBP + 0x10));
      if (cVar4 == '\0') {
        iVar13 = FUN_006059c4(unaff_EBP + -0xc4);
        iVar13 = *(int *)(iVar13 + 8);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (iVar13 == 0) {
LAB_006086c2:
          *(undefined1 *)(unaff_EBP + 0xf) = 0;
        }
        else {
          iVar10 = FUN_006059c4(unaff_EBP + -0xe4);
          iVar13 = *(int *)(iVar10 + 4);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          if (iVar13 == 0) {
            pcVar14 = "";
          }
          else {
            FUN_004c4700();
            pcVar14 = *(char **)(iVar10 + 4);
          }
          if (*(char *)(puVar1 + 1) == '\0') {
            Peek();
          }
          *(bool *)(unaff_EBP + 0xf) = *pcVar14 == *(char *)((int)puVar1 + 5);
          FUN_004040a0(1);
          if (*(char *)(unaff_EBP + 0xf) == '\0') goto LAB_006086c2;
          *(undefined1 *)(unaff_EBP + 0xf) = 1;
        }
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_004040a0(1);
        if (*(char *)(unaff_EBP + 0xf) == '\0') {
          iVar13 = FUN_006091e1(unaff_EBP + -0xd4);
          iVar13 = *(int *)(iVar13 + 8);
          *(undefined1 *)(unaff_EBP + -4) = 9;
          if (iVar13 == 0) {
LAB_0060878a:
            *(undefined1 *)(unaff_EBP + 0xf) = 0;
          }
          else {
            iVar10 = FUN_006091e1(unaff_EBP + -0xb4);
            iVar13 = *(int *)(iVar10 + 4);
            *(undefined1 *)(unaff_EBP + -4) = 10;
            if (iVar13 == 0) {
              pcVar14 = "";
            }
            else {
              FUN_004c4700();
              pcVar14 = *(char **)(iVar10 + 4);
            }
            if (*(char *)(puVar1 + 1) == '\0') {
              Peek();
            }
            *(bool *)(unaff_EBP + 0xf) = *pcVar14 == *(char *)((int)puVar1 + 5);
            FUN_004040a0(1);
            if (*(char *)(unaff_EBP + 0xf) == '\0') goto LAB_0060878a;
            *(undefined1 *)(unaff_EBP + 0xf) = 1;
          }
          *(undefined1 *)(unaff_EBP + -4) = 4;
          FUN_004040a0(1);
          if (*(char *)(unaff_EBP + 0xf) == '\0') goto LAB_006087e4;
          FUN_0060045f();
          uVar6 = FUN_006091e1(unaff_EBP + -0xf4);
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          FUN_0040cc00(uVar6,0,0xffffffff);
          *(undefined1 *)(unaff_EBP + -0xd) = 1;
          *(undefined1 *)(unaff_EBP + -4) = 4;
        }
        else {
          FUN_0060045f();
          uVar6 = FUN_006059c4(unaff_EBP + -0xa4);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          FUN_0040cc00(uVar6,0,0xffffffff);
          *(undefined1 *)(unaff_EBP + -4) = 4;
        }
        FUN_004040a0(1);
      }
LAB_006087e4:
      if (*(int *)(unaff_EBP + -0x38) == 1) {
        FUN_0040c9b0(0,0xffffffff);
      }
    }
    else {
      if (cVar4 != 'v') {
        if (uVar11 != 3) {
          while (cVar4 = FUN_00600aa5(*(undefined4 *)(unaff_EBP + 0x10)), cVar4 == '\0') {
            if (*(char *)(puVar1 + 1) == '\0') {
              Peek();
            }
            if ((*(byte *)(*(int *)(*(int *)(unaff_EBP + -0x30) + 0x10) +
                          (uint)*(byte *)((int)puVar1 + 5) * 2) & 0x48) == 0) break;
            FUN_0060045f();
          }
        }
        goto LAB_006088e3;
      }
      iVar13 = *piVar7;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      uVar6 = (**(code **)(iVar13 + 0x1c))();
      *(undefined4 *)(unaff_EBP + -0x4c) = uVar6;
      FUN_006091b3(unaff_EBP + -0x94);
      pcVar14 = *(char **)(unaff_EBP + -0x90);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (pcVar14 == (char *)0x0) {
        pcVar14 = "";
      }
      if (*pcVar14 < '\x01') {
        while (cVar4 = FUN_00600aa5(*(undefined4 *)(unaff_EBP + 0x10)), cVar4 == '\0') {
          if (*(char *)(puVar1 + 1) == '\0') {
            Peek();
          }
          if ((*(byte *)(*(int *)(*(int *)(unaff_EBP + -0x30) + 0x10) +
                        (uint)*(byte *)((int)puVar1 + 5) * 2) >> 2 & 1) == 0) break;
          if (*(char *)(puVar1 + 1) == '\0') {
            Peek();
          }
          uVar6 = *puVar1;
          uVar2 = puVar1[1];
          FUN_0060045f();
          *(undefined4 *)(unaff_EBP + -0x84) = uVar6;
          *(undefined4 *)(unaff_EBP + -0x80) = uVar2;
          if ((char)uVar2 == '\0') {
            Peek();
          }
          FUN_004eeef0(1,*(undefined4 *)(unaff_EBP + -0x7f));
        }
LAB_0060855c:
        cVar4 = FUN_00600aa5(*(undefined4 *)(unaff_EBP + 0x10));
        if (cVar4 == '\0') {
          if (*(char *)(puVar1 + 1) == '\0') {
            Peek();
          }
          cVar4 = (**(code **)(**(int **)(unaff_EBP + -0x28) + 4))();
          if (*(char *)((int)puVar1 + 5) != cVar4) goto LAB_006085ff;
          FUN_0060045f();
          cVar4 = FUN_00600aa5(*(undefined4 *)(unaff_EBP + 0x10));
          if (cVar4 != '\0') goto LAB_006085ff;
          iVar13 = *(int *)(unaff_EBP + -0x4c);
          do {
            if (*(char *)(puVar1 + 1) == '\0') {
              Peek();
            }
            if ((*(byte *)(*(int *)(*(int *)(unaff_EBP + -0x30) + 0x10) +
                          (uint)*(byte *)((int)puVar1 + 5) * 2) >> 2 & 1) == 0) break;
            if (*(int *)(unaff_EBP + -0x24) < iVar13) {
              if (*(char *)(puVar1 + 1) == '\0') {
                Peek();
              }
              *(undefined1 *)(unaff_EBP + -0x44) = *(undefined1 *)((int)puVar1 + 5);
              FUN_004eeef0(1,*(undefined4 *)(unaff_EBP + -0x44));
              *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
            }
            FUN_0060045f();
            cVar4 = FUN_00600aa5(*(undefined4 *)(unaff_EBP + 0x10));
          } while (cVar4 == '\0');
        }
        else {
LAB_006085ff:
          iVar13 = *(int *)(unaff_EBP + -0x4c);
        }
        if (*(int *)(unaff_EBP + -100) == 0) {
          *(undefined1 *)(unaff_EBP + 0x17) = 1;
        }
        else if (*(int *)(unaff_EBP + -0x24) < iVar13) {
          iVar13 = iVar13 - *(int *)(unaff_EBP + -0x24);
          do {
            FUN_004eeef0(1,0x30);
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
      }
      else {
        uVar5 = (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
        *(undefined1 *)(unaff_EBP + 0xf) = uVar5;
        uVar11 = 0;
        *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + 0x17);
        FUN_004040a0(0);
        FUN_005ae2a0(1,0);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        cVar4 = FUN_00600aa5(*(undefined4 *)(unaff_EBP + 0x10));
        if (cVar4 == '\0') {
          do {
            if (*(char *)(puVar1 + 1) == '\0') {
              Peek();
            }
            if ((*(byte *)(*(int *)(*(int *)(unaff_EBP + -0x30) + 0x10) +
                          (uint)*(byte *)((int)puVar1 + 5) * 2) >> 2 & 1) == 0) {
              if ((*(uint *)(unaff_EBP + -0x18) < uVar11) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                pcVar14 = "";
              }
              else {
                FUN_004c4700();
                pcVar14 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar11);
              }
              if (*pcVar14 == '\0') break;
              if (*(char *)(puVar1 + 1) == '\0') {
                Peek();
              }
              if (*(char *)((int)puVar1 + 5) != *(char *)(unaff_EBP + 0xf)) break;
              FUN_004eeef0(1,0);
              uVar11 = uVar11 + 1;
            }
            else {
              if (*(char *)(puVar1 + 1) == '\0') {
                Peek();
              }
              *(undefined1 *)(unaff_EBP + -0x74) = *(undefined1 *)((int)puVar1 + 5);
              FUN_004eeef0(1,*(undefined4 *)(unaff_EBP + -0x74));
              if ((*(uint *)(unaff_EBP + -0x18) < uVar11) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                pcVar14 = "";
              }
              else {
                FUN_004c4700();
                pcVar14 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar11);
              }
              if (*pcVar14 != '\x7f') {
                if ((*(uint *)(unaff_EBP + -0x18) < uVar11) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                  pcVar14 = "";
                }
                else {
                  FUN_004c4700();
                  pcVar14 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar11);
                }
                *pcVar14 = *pcVar14 + '\x01';
              }
            }
            FUN_0060045f();
            cVar4 = FUN_00600aa5(*(undefined4 *)(unaff_EBP + 0x10));
          } while (cVar4 == '\0');
          if (uVar11 != 0) {
            if ((*(uint *)(unaff_EBP + -0x18) < uVar11) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
              pcVar14 = "";
            }
            else {
              FUN_004c4700();
              pcVar14 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar11);
            }
            if (*pcVar14 < '\x01') {
              *(undefined1 *)(unaff_EBP + 0x17) = 1;
            }
            else {
              uVar11 = uVar11 + 1;
            }
          }
        }
        pcVar14 = *(char **)(unaff_EBP + -0x90);
        if (pcVar14 == (char *)0x0) {
          pcVar14 = "";
        }
        if (*(char *)(unaff_EBP + 0x17) == '\0') {
          do {
            if ((uVar11 == 0) || (*pcVar14 == '\x7f')) break;
            uVar12 = uVar11 - 1;
            if (uVar12 == 0) {
LAB_006084f9:
              if (uVar12 == 0) {
                if (*(int *)(unaff_EBP + -0x1c) == 0) {
                  pcVar9 = "";
                }
                else {
                  FUN_004c4700();
                  pcVar9 = *(char **)(unaff_EBP + -0x1c);
                }
                if (*pcVar14 < *pcVar9) goto LAB_00608521;
              }
              if ('\0' < pcVar14[1]) {
                pcVar14 = pcVar14 + 1;
              }
            }
            else {
              if ((*(uint *)(unaff_EBP + -0x18) < uVar12) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                pcVar9 = "";
              }
              else {
                FUN_004c4700();
                pcVar9 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar12);
              }
              if (*pcVar14 == *pcVar9) goto LAB_006084f9;
LAB_00608521:
              *(undefined1 *)(unaff_EBP + 0x17) = 1;
            }
            uVar11 = uVar11 - 2;
          } while (*(char *)(unaff_EBP + 0x17) == '\0');
          if (*(char *)(unaff_EBP + 0x17) == '\0') {
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            FUN_004040a0(1);
            goto LAB_0060855c;
          }
        }
        FUN_004040a0(1);
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_004040a0(1);
      piVar7 = *(int **)(unaff_EBP + -0x28);
    }
LAB_006088e3:
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
  } while (*(char *)(unaff_EBP + 0x17) == '\0');
  if (*(char *)(unaff_EBP + 0x17) == '\0') {
    if (*(int *)(unaff_EBP + -0x38) != 0) {
      FUN_004c4700();
      pcVar14 = *(char **)(unaff_EBP + -0x3c);
      while (cVar4 = FUN_00600aa5(*(undefined4 *)(unaff_EBP + 0x10)), cVar4 == '\0') {
        pcVar14 = pcVar14 + 1;
        FUN_004c4700();
        if (pcVar14 ==
            (char *)(-(uint)(*(int *)(unaff_EBP + -0x3c) != 0) &
                    *(int *)(unaff_EBP + -0x3c) + *(int *)(unaff_EBP + -0x38))) break;
        if (*(char *)(puVar1 + 1) == '\0') {
          Peek();
        }
        if (*(char *)((int)puVar1 + 5) != *pcVar14) break;
        FUN_0060045f();
      }
      FUN_004c4700();
      if (pcVar14 !=
          (char *)(-(uint)(*(int *)(unaff_EBP + -0x3c) != 0) &
                  *(int *)(unaff_EBP + -0x3c) + *(int *)(unaff_EBP + -0x38))) goto LAB_00608972;
    }
    if (*(char *)(unaff_EBP + -0xd) != '\0') {
      FUN_00609134(0,1,0x2d);
    }
  }
  else {
LAB_00608972:
    FUN_0040c9b0(0,0xffffffff);
  }
  puVar3 = *(undefined1 **)(unaff_EBP + 8);
  *puVar3 = *(undefined1 *)(unaff_EBP + -0x6c);
  FUN_004040a0(0);
  FUN_0040cc00(unaff_EBP + -0x6c,0,0xffffffff);
  FUN_004040a0(1);
  FUN_004040a0(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}

