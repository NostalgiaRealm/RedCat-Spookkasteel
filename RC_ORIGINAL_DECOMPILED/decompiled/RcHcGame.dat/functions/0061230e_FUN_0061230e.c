/*
 * FUN_0061230e at 0061230e
 * undefined FUN_0061230e(void)
 * Address ranges: 0061230e-00612e60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061230e(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  char *pcVar12;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 local_18 [4];
  int local_14;
  undefined1 local_10 [4];
  uint local_c;
  uint local_8;
  
  FUN_00614dc3();
  uVar1 = FUN_00612e61();
  local_14 = FUN_00615051();
  if (uVar1 == 0xffff) {
    FUN_00614fc6(1);
    return param_1;
  }
  if (uVar1 == 0xfffe) {
    puVar4 = local_48;
    FUN_00614fc6(2);
    uVar2 = FUN_006151fc(puVar4,param_2);
    FUN_00614df0(uVar2);
    puVar4 = local_40;
    goto LAB_00612e50;
  }
  local_8 = uVar1 & 0x8000;
  if (local_8 == 0) {
LAB_006128a0:
    FUN_00615373(param_2);
    if (local_8 == 0) {
      if ((uVar1 & 0x7800) == 0x6800) {
        puVar4 = (undefined1 *)FUN_00614a92(local_58,local_20);
        goto LAB_00612e50;
      }
      if ((uVar1 & 0x7800) == 0x7000) {
        uVar2 = FUN_00614a92(local_58,local_20);
        FUN_00614df0(uVar2);
        puVar4 = local_48;
        goto LAB_00612e50;
      }
      if ((uVar1 & 0x7800) == 0x6000) {
        uVar2 = FUN_00611d36(local_58);
        FUN_00614df0(uVar2);
        puVar4 = local_50;
        puVar11 = &DAT_0065251c;
        puVar10 = local_48;
        puVar9 = local_40;
        FUN_0061517e(local_38,0x7b);
        FUN_006151fc(puVar9,puVar10);
        puVar4 = (undefined1 *)FUN_006151bd(puVar4,puVar11);
        goto LAB_00612e50;
      }
      uVar3 = uVar1 & 0x6000;
    }
    else {
      uVar3 = (uVar1 & 0x1800) - 0x800;
    }
    if (uVar3 == 0) {
      uVar3 = uVar1 & 0x400;
    }
    else {
      uVar3 = uVar1 & 0x1000;
    }
    if ((uVar3 == 0) || ((uVar1 & 0x1b00) != 0x1000 || local_8 == 0)) {
      if (local_8 == 0) {
        uVar3 = uVar1 & 0x6000;
      }
      else {
        uVar3 = (uVar1 & 0x1800) - 0x800;
      }
      if (uVar3 == 0) {
        uVar3 = uVar1 & 0x400;
      }
      else {
        uVar3 = uVar1 & 0x1000;
      }
      if ((uVar3 != 0) && ((uVar1 & 0x1b00) == 0x1100 && local_8 != 0)) {
        pcVar12 = "`template static data member constructor helper\'";
        goto LAB_006129ba;
      }
      if (local_8 == 0) {
        uVar3 = uVar1 & 0x6000;
      }
      else {
        uVar3 = (uVar1 & 0x1800) - 0x800;
      }
      if (uVar3 == 0) {
        uVar3 = uVar1 & 0x400;
      }
      else {
        uVar3 = uVar1 & 0x1000;
      }
      if ((uVar3 != 0) && ((uVar1 & 0x1b00) == 0x1200 && local_8 != 0)) {
        pcVar12 = "`template static data member destructor helper\'";
        goto LAB_006129ba;
      }
      if (local_8 == 0) {
        if ((uVar1 & 0x7800) == 0x7800) goto LAB_00612e4d;
        goto LAB_00612a80;
      }
LAB_00612a86:
      uVar3 = (uVar1 & 0x1800) - 0x800;
    }
    else {
      pcVar12 = "`local static destructor helper\'";
LAB_006129ba:
      FUN_00615307(pcVar12);
LAB_00612a80:
      if (local_8 != 0) goto LAB_00612a86;
      uVar3 = uVar1 & 0x6000;
    }
    if (uVar3 == 0) {
      uVar3 = uVar1 & 0x400;
    }
    else {
      uVar3 = uVar1 & 0x1000;
    }
    if ((uVar3 == 0) ||
       (((uVar1 & 0x1b00) != 0x1100 || local_8 == 0 && ((uVar1 & 0x1b00) != 0x1200 || local_8 == 0))
       )) {
      puVar4 = (undefined1 *)FUN_00614c75(local_58,local_20);
    }
    else {
      puVar4 = local_20;
      puVar10 = local_58;
      FUN_00614e92(&DAT_00693460);
      uVar2 = FUN_006151fc(puVar10,puVar4);
      FUN_00614df0(uVar2);
      puVar4 = local_48;
    }
LAB_00612b1a:
    FUN_006154c8(puVar4);
LAB_00612b23:
    if (local_8 == 0) {
      uVar3 = uVar1 & 0x6000;
    }
    else {
      uVar3 = (uVar1 & 0x1800) - 0x800;
    }
    if (uVar3 == 0) {
      if ((~DAT_00710064 & 0x200) != 0) {
        if (local_8 == 0) {
          uVar3 = uVar1 & 0x6000;
        }
        else {
          uVar3 = (uVar1 & 0x1800) - 0x800;
        }
        if ((uVar3 == 0) && (local_8 == 0 || (uVar1 & 0x700) == 0x200)) {
          puVar4 = local_20;
          puVar10 = local_58;
          FUN_00614e92("static ");
          uVar2 = FUN_006151fc(puVar10,puVar4);
          FUN_00614df0(uVar2);
          FUN_006154c8(local_48);
        }
        if (local_8 == 0) {
LAB_00612c05:
          uVar3 = uVar1 & 0x6000;
LAB_00612c09:
          if (uVar3 == 0) {
            uVar3 = uVar1 & 0x400;
          }
          else {
            uVar3 = uVar1 & 0x1000;
          }
          if (uVar3 == 0) goto LAB_00612cac;
          if (local_8 == 0) {
            uVar3 = uVar1 & 0x6000;
          }
          else {
            uVar3 = (uVar1 & 0x1800) - 0x800;
          }
          if ((uVar3 != 0) || ((uVar1 & 0x700) != 0x500)) {
            if (local_8 == 0) {
              uVar3 = uVar1 & 0x6000;
            }
            else {
              uVar3 = (uVar1 & 0x1800) - 0x800;
            }
            if ((uVar3 != 0) || ((uVar1 & 0x700) != 0x400)) goto LAB_00612cac;
          }
        }
        else if ((uVar1 & 0x700) != 0x100) {
          if (local_8 == 0) goto LAB_00612c05;
          uVar3 = (uVar1 & 0x1800) - 0x800;
          goto LAB_00612c09;
        }
        puVar4 = local_20;
        puVar10 = local_58;
        FUN_00614e92("virtual ");
        uVar2 = FUN_006151fc(puVar10,puVar4);
        FUN_00614df0(uVar2);
        FUN_006154c8(local_48);
      }
LAB_00612cac:
      if ((~DAT_00710064 & 0x80) != 0) {
        if (local_8 == 0) {
          uVar3 = uVar1 & 0x6000;
        }
        else {
          uVar3 = (uVar1 & 0x1800) - 0x800;
        }
        if (uVar3 == 0) {
          if (local_8 == 0) {
            bVar8 = (uVar1 & 0x1800) != 0x800;
          }
          else {
            bVar8 = ((byte)uVar1 & 0xc0) != 0x40;
          }
          if (bVar8) goto LAB_00612d23;
          puVar4 = local_20;
          puVar10 = local_58;
          FUN_00614e92("private: ");
          uVar2 = FUN_006151fc(puVar10,puVar4);
          FUN_00614df0(uVar2);
LAB_00612de3:
          FUN_006154c8(local_48);
        }
        else {
LAB_00612d23:
          if (local_8 == 0) {
            uVar3 = uVar1 & 0x6000;
          }
          else {
            uVar3 = (uVar1 & 0x1800) - 0x800;
          }
          if (uVar3 == 0) {
            if (local_8 == 0) {
              bVar8 = (uVar1 & 0x1800) != 0x1000;
            }
            else {
              bVar8 = ((byte)uVar1 & 0xc0) != 0x80;
            }
            if (!bVar8) {
              puVar4 = local_20;
              puVar10 = local_58;
              FUN_00614e92("protected: ");
              uVar2 = FUN_006151fc(puVar10,puVar4);
              FUN_00614df0(uVar2);
              goto LAB_00612de3;
            }
          }
          if (local_8 == 0) {
            uVar3 = uVar1 & 0x6000;
          }
          else {
            uVar3 = (uVar1 & 0x1800) - 0x800;
          }
          if (uVar3 == 0) {
            if (local_8 == 0) {
              uVar3 = uVar1 & 0x1800;
            }
            else {
              uVar3 = uVar1 & 0xc0;
            }
            if (uVar3 == 0) {
              puVar4 = local_20;
              puVar10 = local_58;
              FUN_00614e92("public: ");
              uVar2 = FUN_006151fc(puVar10,puVar4);
              FUN_00614df0(uVar2);
              goto LAB_00612de3;
            }
          }
        }
      }
    }
    if (local_8 == 0) {
      uVar3 = uVar1 & 0x6000;
    }
    else {
      uVar3 = (uVar1 & 0x1800) - 0x800;
    }
    if (uVar3 == 0) {
      uVar1 = uVar1 & 0x400;
    }
    else {
      uVar1 = uVar1 & 0x1000;
    }
    if (uVar1 != 0) {
      puVar4 = local_20;
      puVar10 = local_58;
      FUN_00614e92("[thunk]:");
      uVar2 = FUN_006151fc(puVar10,puVar4);
      FUN_00614df0(uVar2);
      FUN_006154c8(local_48);
    }
  }
  else {
    local_c = (uint)((uVar1 & 0x1800) == 0x800);
    if (local_c == 0) {
      uVar3 = uVar1 & 0x1000;
    }
    else {
      uVar3 = uVar1 & 0x400;
    }
    if ((uVar3 != 0) && ((uVar1 & 0x1b00) == 0x1000)) goto LAB_006128a0;
    if (local_c == 0) {
      uVar3 = uVar1 & 0x1000;
    }
    else {
      uVar3 = uVar1 & 0x400;
    }
    if ((uVar3 != 0) && (((uVar1 & 0x1b00) == 0x1100 || ((uVar1 & 0x1b00) == 0x1200))))
    goto LAB_006128a0;
    if ((uVar1 & 0x4000) != 0) {
      if (((~DAT_00710064 & 2) == 0) || ((~DAT_00710064 & 8) == 0)) {
        uVar2 = FUN_00613161(local_48);
        FUN_00615450(uVar2);
      }
      else {
        uVar2 = FUN_00613161(local_48);
        puVar4 = local_38;
        FUN_00614dcd(0x20);
        uVar2 = FUN_006151fc(puVar4,uVar2);
        FUN_00614df0(uVar2);
        FUN_006154c8(local_40);
      }
    }
    if (local_c == 0) {
      uVar3 = uVar1 & 0x1000;
    }
    else {
      uVar3 = uVar1 & 0x400;
    }
    if ((uVar3 != 0) && ((uVar1 & 0x1800) == 0x1800)) {
      uVar2 = FUN_00611d36(local_48);
      FUN_00614df0(uVar2);
      puVar4 = local_38;
      uVar2 = 0x2c;
      puVar10 = local_40;
      puVar9 = local_30;
      FUN_0061517e(local_28,0x7b);
      FUN_006151fc(puVar9,puVar10);
      uVar2 = FUN_0061517e(puVar4,uVar2);
      FUN_00615373(uVar2);
      puVar4 = local_48;
      puVar11 = &DAT_00652538;
      FUN_00614a4d(local_40,puVar4,&DAT_00652538);
      uVar2 = FUN_006151bd(puVar4,puVar11);
      FUN_00615373(uVar2);
      if (((~DAT_00710064 & 2) == 0) || ((~DAT_00710064 & 0x10) == 0)) {
        uVar2 = FUN_006132ce(local_48);
        FUN_00615450(uVar2);
        goto LAB_00612b23;
      }
      uVar2 = FUN_006132ce(local_48);
      puVar4 = local_38;
      FUN_00614dcd(0x20);
      uVar2 = FUN_006151fc(puVar4,uVar2);
      FUN_00614df0(uVar2);
      puVar4 = local_20;
      puVar10 = local_28;
      FUN_0061517e(local_18,0x20);
      puVar4 = (undefined1 *)FUN_006151fc(puVar10,puVar4);
      goto LAB_00612b1a;
    }
    FUN_00614dc3();
    FUN_00614dc3();
    FUN_00614dc3();
    uVar3 = local_c;
    if (local_c == 0) {
      uVar5 = uVar1 & 0x1000;
    }
    else {
      uVar5 = uVar1 & 0x400;
    }
    if (uVar5 != 0) {
      if ((local_c != 0) && ((uVar1 & 0x700) == 0x500)) {
        uVar2 = FUN_00611d36(local_50);
        FUN_00614df0(uVar2);
        FUN_006154c8(local_48);
      }
      uVar2 = FUN_00611d36(local_50);
      FUN_00614df0(uVar2);
      FUN_006154c8(local_48);
    }
    if ((uVar3 != 0) && ((uVar1 & 0x700) != 0x200)) {
      if (((byte)DAT_00710064 & 0x60) == 0x60) {
        uVar2 = FUN_00614a17(local_50);
        FUN_00615450(uVar2);
      }
      else {
        uVar2 = FUN_00614a17(local_50);
        FUN_006154c8(uVar2);
      }
    }
    if (((~DAT_00710064 & 2) == 0) || ((~DAT_00710064 & 0x10) == 0)) {
      uVar2 = FUN_006132ce(local_50);
      FUN_00615450(uVar2);
    }
    else {
      puVar4 = local_20;
      puVar10 = local_50;
      FUN_006132ce(local_48,puVar10,puVar4);
      uVar2 = FUN_006151fc(puVar10,puVar4);
      FUN_006154c8(uVar2);
    }
    iVar6 = FUN_0061503c();
    if (iVar6 == 0) {
      iVar6 = FUN_0061503c();
      if ((iVar6 == 0) && ((DAT_00710064 & 0x1000) == 0)) {
        puVar4 = local_50;
        FUN_00614dcd(0x20);
        uVar2 = FUN_006151fc(puVar4,param_2);
        FUN_00614df0(uVar2);
        FUN_00615373(local_48);
      }
      else {
        FUN_006154c8(param_2);
      }
    }
    iVar6 = 0;
    FUN_00614dc3();
    if (local_14 == 0) {
      iVar7 = FUN_00614d0f(8,0);
      if (iVar7 != 0) {
        iVar6 = FUN_00614dc3();
      }
      uVar2 = FUN_0061336a(local_58,iVar6);
      FUN_006154c8(uVar2);
LAB_00612754:
      uVar3 = local_c;
      if (local_c == 0) {
        uVar5 = uVar1 & 0x1000;
      }
      else {
        uVar5 = uVar1 & 0x400;
      }
      if (uVar5 != 0) {
        if ((local_c == 0) || ((uVar1 & 0x700) != 0x500)) {
          FUN_00615307("`adjustor{");
        }
        else {
          puVar4 = local_30;
          puVar10 = local_58;
          FUN_00614e92("`vtordisp{");
          uVar2 = FUN_006151fc(puVar10,puVar4);
          FUN_00614df0(uVar2);
          uVar2 = FUN_0061517e(local_18,0x2c);
          FUN_00615373(uVar2);
        }
        uVar2 = FUN_006151bd(local_58,&DAT_00652538);
        FUN_00615373(uVar2);
      }
      uVar2 = FUN_00613632(local_58);
      puVar4 = local_50;
      FUN_00614dcd(0x28);
      uVar2 = FUN_006151fc(puVar4,uVar2);
      FUN_00614df0(uVar2);
      uVar2 = FUN_0061517e(local_10,0x29);
      FUN_00615373(uVar2);
      if ((uVar3 != 0) && ((uVar1 & 0x700) != 0x200)) {
        FUN_00615373(local_28);
      }
      if ((~DAT_00710064 & 0x100) == 0) {
        uVar2 = FUN_006137b4(local_58);
        FUN_00615450(uVar2);
      }
      else {
        uVar2 = FUN_006137b4(local_58);
        FUN_00615373(uVar2);
      }
      if (((~DAT_00710064 & 4) != 0) && (iVar6 != 0)) {
        FUN_006154c8(local_20);
        puVar4 = local_40;
        goto LAB_00612b1a;
      }
      goto LAB_00612b23;
    }
    uVar2 = FUN_0061336a(local_58);
    puVar4 = local_50;
    FUN_00614e92(&DAT_00693460);
    uVar2 = FUN_006151fc(puVar4,uVar2);
    FUN_00614df0(uVar2);
    FUN_00615373(local_48);
    if ((DAT_00710064 & 0x1000) == 0) goto LAB_00612754;
  }
LAB_00612e4d:
  puVar4 = local_20;
LAB_00612e50:
  FUN_00614df0(puVar4);
  return param_1;
}

