/*
 * FUN_006043f5 at 006043f5
 * undefined FUN_006043f5(void)
 * Address ranges: 006043f5-00604c95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_006043f5(void)

{
  short sVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  bool bVar6;
  char cVar7;
  short sVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined2 uVar15;
  undefined2 extraout_var;
  char *pcVar12;
  undefined2 extraout_var_00;
  char *pcVar13;
  undefined2 extraout_var_01;
  int iVar14;
  short *psVar16;
  int unaff_EBP;
  uint uVar17;
  uint uVar18;
  int iVar19;
  
  FUN_0060eb4c();
  *(undefined4 *)(unaff_EBP + -0x74) = 0;
  if (*(char *)(unaff_EBP + 0x14) == '\0') {
    uVar9 = FUN_005e7380(unaff_EBP + -0x40);
    *(undefined4 *)(unaff_EBP + -4) = 2;
    piVar10 = (int *)FUN_006062f2(uVar9,0,1);
    *(int **)(unaff_EBP + -0x24) = piVar10;
  }
  else {
    uVar9 = FUN_005e7380(unaff_EBP + -0x40);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    piVar10 = (int *)FUN_006063b5(uVar9,0,1);
    *(int **)(unaff_EBP + -0x24) = piVar10;
  }
  std::locale::~locale((locale *)(unaff_EBP + -0x40));
  uVar9 = FUN_005e7380(unaff_EBP + -0x6c);
  *(undefined4 *)(unaff_EBP + -4) = 3;
  uVar9 = FUN_00605cd2(uVar9,0,1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = uVar9;
  std::locale::~locale((locale *)(unaff_EBP + -0x6c));
  *(undefined1 *)(unaff_EBP + 0x17) = 0;
  *(undefined1 *)(unaff_EBP + -0xd) = 0;
  *(undefined1 *)(unaff_EBP + -0x3c) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_00605987(0);
  *(undefined4 *)(unaff_EBP + -4) = 4;
  *(undefined1 *)(unaff_EBP + -0x68) = *(undefined1 *)(unaff_EBP + 0x17);
  FUN_00605987(0);
  iVar19 = *piVar10;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puVar11 = (undefined4 *)(**(code **)(iVar19 + 0x24))(unaff_EBP + -0x58);
  puVar2 = *(undefined4 **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x70) = *puVar11;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  do {
    uVar17 = *(uint *)(unaff_EBP + -0x2c);
    if (3 < uVar17) break;
    cVar7 = *(char *)(unaff_EBP + -0x70 + uVar17);
    if (cVar7 == '$') {
      FUN_006091ca(unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if ((*(byte *)(*(int *)(unaff_EBP + 0x18) + 0xc) & 8) == 0) {
        if (((*(int *)(unaff_EBP + -0x2c) != 3) || (*(int *)(unaff_EBP + -0x34) != 0)) &&
           (cVar7 = FUN_006069c8(*(undefined4 *)(unaff_EBP + 0x10)), cVar7 == '\0')) {
          if (*(char *)(puVar2 + 1) == '\0') {
            Peek();
          }
          psVar16 = *(short **)(unaff_EBP + -0x50);
          if (psVar16 == (short *)0x0) {
            psVar16 = &DAT_00651838;
          }
          if (*(short *)((int)puVar2 + 6) == *psVar16) goto LAB_00604afa;
        }
        FUN_00605866(0,0xffffffff);
      }
LAB_00604afa:
      FUN_006058d2();
      for (psVar16 = *(short **)(unaff_EBP + -0x50);
          (cVar7 = FUN_006069c8(*(undefined4 *)(unaff_EBP + 0x10)), cVar7 == '\0' &&
          (FUN_006058d2(),
          psVar16 !=
          (short *)(-(uint)(*(int *)(unaff_EBP + -0x50) != 0) &
                   *(int *)(unaff_EBP + -0x50) + *(int *)(unaff_EBP + -0x4c) * 2)));
          psVar16 = psVar16 + 1) {
        if (*(char *)(puVar2 + 1) == '\0') {
          Peek();
        }
        if (*(short *)((int)puVar2 + 6) != *psVar16) break;
        FUN_00605560();
      }
      FUN_006058d2();
      if (psVar16 !=
          (short *)(-(uint)(*(int *)(unaff_EBP + -0x50) != 0) &
                   *(int *)(unaff_EBP + -0x50) + *(int *)(unaff_EBP + -0x4c) * 2)) {
        *(undefined1 *)(unaff_EBP + 0x17) = 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00605987(1);
    }
    else if (cVar7 == '+') {
      cVar7 = FUN_006069c8(*(undefined4 *)(unaff_EBP + 0x10));
      if (cVar7 == '\0') {
        iVar19 = FUN_006059c4(unaff_EBP + -0xc0);
        iVar19 = *(int *)(iVar19 + 8);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        if (iVar19 == 0) {
LAB_0060495f:
          bVar6 = false;
        }
        else {
          iVar14 = FUN_006059c4(unaff_EBP + -0xe0);
          iVar19 = *(int *)(iVar14 + 4);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          if (iVar19 == 0) {
            psVar16 = &DAT_00651838;
          }
          else {
            FUN_006058d2();
            psVar16 = *(short **)(iVar14 + 4);
          }
          if (*(char *)(puVar2 + 1) == '\0') {
            Peek();
          }
          sVar8 = *psVar16;
          sVar1 = *(short *)((int)puVar2 + 6);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          FUN_00605987(1);
          if (sVar8 != sVar1) goto LAB_0060495f;
          bVar6 = true;
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_00605987(1);
        if (bVar6) {
          FUN_00605560();
          uVar9 = FUN_006059c4(unaff_EBP + -0xa0);
          *(undefined1 *)(unaff_EBP + -4) = 9;
          FUN_00605614(uVar9,0,0xffffffff);
          *(undefined1 *)(unaff_EBP + -4) = 5;
        }
        else {
          iVar19 = FUN_006059db(unaff_EBP + -0xd0);
          iVar19 = *(int *)(iVar19 + 8);
          *(undefined1 *)(unaff_EBP + -4) = 10;
          if (iVar19 == 0) {
LAB_00604a24:
            bVar6 = false;
          }
          else {
            iVar14 = FUN_006059db(unaff_EBP + -0xb0);
            iVar19 = *(int *)(iVar14 + 4);
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            if (iVar19 == 0) {
              psVar16 = &DAT_00651838;
            }
            else {
              FUN_006058d2();
              psVar16 = *(short **)(iVar14 + 4);
            }
            if (*(char *)(puVar2 + 1) == '\0') {
              Peek();
            }
            sVar8 = *psVar16;
            sVar1 = *(short *)((int)puVar2 + 6);
            *(undefined1 *)(unaff_EBP + -4) = 10;
            FUN_00605987(1);
            if (sVar8 != sVar1) goto LAB_00604a24;
            bVar6 = true;
          }
          *(undefined1 *)(unaff_EBP + -4) = 5;
          FUN_00605987(1);
          if (!bVar6) goto LAB_00604a7a;
          FUN_00605560();
          uVar9 = FUN_006059db(unaff_EBP + -0xf0);
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          FUN_00605614(uVar9,0,0xffffffff);
          *(undefined1 *)(unaff_EBP + -0xd) = 1;
          *(undefined1 *)(unaff_EBP + -4) = 5;
        }
        FUN_00605987(1);
      }
LAB_00604a7a:
      if (*(int *)(unaff_EBP + -0x34) == 1) {
        FUN_00605866(0,0xffffffff);
      }
    }
    else {
      if (cVar7 != 'v') {
        if ((uVar17 != 3) &&
           (uVar9 = FUN_006069c8(*(undefined4 *)(unaff_EBP + 0x10)), (char)uVar9 == '\0')) {
          piVar3 = *(int **)(unaff_EBP + -0x28);
          do {
            uVar15 = (undefined2)((uint)uVar9 >> 0x10);
            if (*(char *)(puVar2 + 1) == '\0') {
              Peek();
              uVar15 = extraout_var;
            }
            cVar7 = (**(code **)(*piVar3 + 8))
                              (0x48,CONCAT22(uVar15,*(undefined2 *)((int)puVar2 + 6)));
            if (cVar7 == '\0') break;
            FUN_00605560();
            uVar9 = FUN_006069c8(*(undefined4 *)(unaff_EBP + 0x10));
          } while ((char)uVar9 == '\0');
        }
        goto LAB_00604b80;
      }
      iVar19 = *piVar10;
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      uVar9 = (**(code **)(iVar19 + 0x1c))();
      *(undefined4 *)(unaff_EBP + -0x44) = uVar9;
      FUN_006091b3(unaff_EBP + -0x90);
      pcVar12 = *(char **)(unaff_EBP + -0x8c);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (pcVar12 == (char *)0x0) {
        pcVar12 = "";
      }
      if (*pcVar12 < '\x01') {
        while (cVar7 = FUN_006069c8(*(undefined4 *)(unaff_EBP + 0x10)), cVar7 == '\0') {
          if (*(char *)(puVar2 + 1) == '\0') {
            Peek();
          }
          cVar7 = (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))
                            (4,*(undefined2 *)((int)puVar2 + 6));
          if (cVar7 == '\0') break;
          if (*(char *)(puVar2 + 1) == '\0') {
            Peek();
          }
          uVar9 = *puVar2;
          uVar4 = puVar2[1];
          FUN_00605560();
          *(undefined4 *)(unaff_EBP + -0x80) = uVar9;
          *(undefined4 *)(unaff_EBP + -0x7c) = uVar4;
          if ((char)uVar4 == '\0') {
            Peek();
          }
          FUN_0060526c(1,*(undefined4 *)(unaff_EBP + -0x7a));
        }
LAB_006047f3:
        cVar7 = FUN_006069c8(*(undefined4 *)(unaff_EBP + 0x10));
        if (cVar7 == '\0') {
          if (*(char *)(puVar2 + 1) == '\0') {
            Peek();
          }
          sVar8 = (**(code **)(**(int **)(unaff_EBP + -0x24) + 4))();
          if (*(short *)((int)puVar2 + 6) != sVar8) goto LAB_00604894;
          FUN_00605560();
          uVar9 = FUN_006069c8(*(undefined4 *)(unaff_EBP + 0x10));
          if ((char)uVar9 != '\0') goto LAB_00604894;
          iVar19 = *(int *)(unaff_EBP + -0x44);
          piVar10 = *(int **)(unaff_EBP + -0x28);
          do {
            uVar15 = (undefined2)((uint)uVar9 >> 0x10);
            if (*(char *)(puVar2 + 1) == '\0') {
              Peek();
              uVar15 = extraout_var_01;
            }
            cVar7 = (**(code **)(*piVar10 + 8))(4,CONCAT22(uVar15,*(undefined2 *)((int)puVar2 + 6)))
            ;
            if (cVar7 == '\0') break;
            if (*(int *)(unaff_EBP + 0xc) < iVar19) {
              if (*(char *)(puVar2 + 1) == '\0') {
                Peek();
              }
              FUN_0060526c(1,*(undefined2 *)((int)puVar2 + 6));
              *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
            }
            FUN_00605560();
            uVar9 = FUN_006069c8(*(undefined4 *)(unaff_EBP + 0x10));
          } while ((char)uVar9 == '\0');
        }
        else {
LAB_00604894:
          iVar19 = *(int *)(unaff_EBP + -0x44);
        }
        if (*(int *)(unaff_EBP + -0x60) == 0) {
          *(undefined1 *)(unaff_EBP + 0x17) = 1;
        }
        else if (*(int *)(unaff_EBP + 0xc) < iVar19) {
          iVar19 = iVar19 - *(int *)(unaff_EBP + 0xc);
          do {
            uVar9 = FUN_0060a03a(0x30);
            FUN_0060526c(1,uVar9);
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
        }
      }
      else {
        uVar9 = (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
        *(undefined4 *)(unaff_EBP + -0x58) = uVar9;
        uVar17 = 0;
        *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + 0x17);
        FUN_004040a0(0);
        FUN_005ae2a0(1,0);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        uVar9 = FUN_006069c8(*(undefined4 *)(unaff_EBP + 0x10));
        if ((char)uVar9 == '\0') {
          do {
            uVar15 = (undefined2)((uint)uVar9 >> 0x10);
            if (*(char *)(puVar2 + 1) == '\0') {
              Peek();
              uVar15 = extraout_var_00;
            }
            cVar7 = (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))
                              (4,CONCAT22(uVar15,*(undefined2 *)((int)puVar2 + 6)));
            if (cVar7 == '\0') {
              if ((*(uint *)(unaff_EBP + -0x18) < uVar17) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                pcVar12 = "";
              }
              else {
                FUN_004c4700();
                pcVar12 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar17);
              }
              if (*pcVar12 == '\0') break;
              if (*(char *)(puVar2 + 1) == '\0') {
                Peek();
              }
              if (*(short *)((int)puVar2 + 6) != *(short *)(unaff_EBP + -0x58)) break;
              FUN_004eeef0(1,0);
              uVar17 = uVar17 + 1;
            }
            else {
              if (*(char *)(puVar2 + 1) == '\0') {
                Peek();
              }
              FUN_0060526c(1,*(undefined2 *)((int)puVar2 + 6));
              if ((*(uint *)(unaff_EBP + -0x18) < uVar17) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                pcVar12 = "";
              }
              else {
                FUN_004c4700();
                pcVar12 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar17);
              }
              if (*pcVar12 != '\x7f') {
                if ((*(uint *)(unaff_EBP + -0x18) < uVar17) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                  pcVar12 = "";
                }
                else {
                  FUN_004c4700();
                  pcVar12 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar17);
                }
                *pcVar12 = *pcVar12 + '\x01';
              }
            }
            FUN_00605560();
            uVar9 = FUN_006069c8(*(undefined4 *)(unaff_EBP + 0x10));
          } while ((char)uVar9 == '\0');
          if (uVar17 != 0) {
            if ((*(uint *)(unaff_EBP + -0x18) < uVar17) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
              pcVar12 = "";
            }
            else {
              FUN_004c4700();
              pcVar12 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar17);
            }
            if (*pcVar12 < '\x01') {
              *(undefined1 *)(unaff_EBP + 0x17) = 1;
            }
            else {
              uVar17 = uVar17 + 1;
            }
          }
        }
        pcVar12 = *(char **)(unaff_EBP + -0x8c);
        if (pcVar12 == (char *)0x0) {
          pcVar12 = "";
        }
        if (*(char *)(unaff_EBP + 0x17) == '\0') {
          do {
            if ((uVar17 == 0) || (*pcVar12 == '\x7f')) break;
            uVar18 = uVar17 - 1;
            if (uVar18 == 0) {
LAB_00604790:
              if (uVar18 == 0) {
                if (*(int *)(unaff_EBP + -0x1c) == 0) {
                  pcVar13 = "";
                }
                else {
                  FUN_004c4700();
                  pcVar13 = *(char **)(unaff_EBP + -0x1c);
                }
                if (*pcVar12 < *pcVar13) goto LAB_006047b8;
              }
              if ('\0' < pcVar12[1]) {
                pcVar12 = pcVar12 + 1;
              }
            }
            else {
              if ((*(uint *)(unaff_EBP + -0x18) < uVar18) || (*(int *)(unaff_EBP + -0x1c) == 0)) {
                pcVar13 = "";
              }
              else {
                FUN_004c4700();
                pcVar13 = (char *)(*(int *)(unaff_EBP + -0x1c) + uVar18);
              }
              if (*pcVar12 == *pcVar13) goto LAB_00604790;
LAB_006047b8:
              *(undefined1 *)(unaff_EBP + 0x17) = 1;
            }
            uVar17 = uVar17 - 2;
          } while (*(char *)(unaff_EBP + 0x17) == '\0');
          if (*(char *)(unaff_EBP + 0x17) == '\0') {
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            FUN_004040a0(1);
            goto LAB_006047f3;
          }
        }
        FUN_004040a0(1);
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_004040a0(1);
      piVar10 = *(int **)(unaff_EBP + -0x24);
    }
LAB_00604b80:
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
  } while (*(char *)(unaff_EBP + 0x17) == '\0');
  if (*(char *)(unaff_EBP + 0x17) == '\0') {
    if (*(int *)(unaff_EBP + -0x34) != 0) {
      FUN_006058d2();
      psVar16 = *(short **)(unaff_EBP + -0x38);
      while (cVar7 = FUN_006069c8(*(undefined4 *)(unaff_EBP + 0x10)), cVar7 == '\0') {
        psVar16 = psVar16 + 1;
        FUN_006058d2();
        if (psVar16 ==
            (short *)(-(uint)(*(int *)(unaff_EBP + -0x38) != 0) &
                     *(int *)(unaff_EBP + -0x38) + *(int *)(unaff_EBP + -0x34) * 2)) break;
        if (*(char *)(puVar2 + 1) == '\0') {
          Peek();
        }
        if (*(short *)((int)puVar2 + 6) != *psVar16) break;
        FUN_00605560();
      }
      FUN_006058d2();
      if (psVar16 !=
          (short *)(-(uint)(*(int *)(unaff_EBP + -0x38) != 0) &
                   *(int *)(unaff_EBP + -0x38) + *(int *)(unaff_EBP + -0x34) * 2))
      goto LAB_00604c12;
    }
    if (*(char *)(unaff_EBP + -0xd) != '\0') {
      uVar9 = FUN_0060a03a(0x2d);
      FUN_0060578c(0,1,uVar9);
    }
  }
  else {
LAB_00604c12:
    FUN_00605866(0,0xffffffff);
  }
  puVar5 = *(undefined1 **)(unaff_EBP + 8);
  *puVar5 = *(undefined1 *)(unaff_EBP + -0x68);
  FUN_00605987(0);
  FUN_00605614(unaff_EBP + -0x68,0,0xffffffff);
  *(undefined4 *)(unaff_EBP + -0x74) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00605987(1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00605987(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar5;
}

