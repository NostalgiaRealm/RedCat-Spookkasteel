/*
 * FUN_1001d6e0 at 1001d6e0
 * undefined FUN_1001d6e0(void)
 * Address ranges: 1001d6e0-1001db4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_1001d6e0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_114;
  uint local_110;
  uint local_10c;
  int local_108 [2];
  undefined1 local_100 [8];
  undefined1 local_f8 [3];
  undefined1 local_f5 [245];
  
  iVar1 = FUN_10014a00(4);
  if (iVar1 == 0) {
    uVar3 = 0x519;
  }
  else {
    if ((local_10c & 0xffff0000) == 0x10010000) {
      piVar2 = (int *)FUN_1001dd60();
      return piVar2;
    }
    if (local_10c != 0x48544150) {
      FUN_10015fb0(0x3f,&DAT_10265ce0,s___Actor_path_c_1003c778,0x523,&DAT_10265ce0,0);
      return (int *)0x0;
    }
    iVar1 = FUN_100149e0(0x100);
    if (iVar1 == 0) {
      uVar3 = 0x52a;
    }
    else {
      iVar1 = FUN_1002836b(local_100,s__X__X_1003a6b0,&local_10c,&local_110);
      if (iVar1 != 2) {
        FUN_10015fb0(0x3f,&DAT_10265ce0,s___Actor_path_c_1003c778,0x52f,&DAT_10265ce0,0);
        return (int *)0x0;
      }
      local_110 = local_110 | local_10c << 8;
      if (local_110 == 0xf0) {
        piVar2 = (int *)FUN_1001d340();
        return piVar2;
      }
      if ((local_110 != 0xf1) && (local_110 != 0xf2)) {
        FUN_10015fb0(0x3f,&DAT_10265ce0,s___Actor_path_c_1003c778,0x537,&DAT_10265ce0,0);
        return (int *)0x0;
      }
      piVar2 = (int *)FUN_1001cc70(0);
      if (piVar2 == (int *)0x0) {
        return (int *)0x0;
      }
      iVar1 = FUN_100149e0(0x100);
      if (iVar1 == 0) {
        FUN_1001cd40();
        uVar3 = 0x542;
      }
      else {
        iVar1 = FUN_10033390(local_100,s_Rotation_1003c7c8,8);
        if (iVar1 == 0) {
          if (local_110 == 0xf1) {
            piVar2[1] = 0;
            iVar1 = FUN_1002836b(local_f8,&DAT_1003a694,&local_114);
            if (iVar1 != 1) {
              FUN_1001cd40();
              uVar3 = 0x549;
              goto LAB_1001db31;
            }
          }
          else {
            if (local_110 != 0xf2) {
              FUN_1001cd40();
              uVar3 = 0x553;
              goto LAB_1001db31;
            }
            iVar1 = FUN_1002836b(local_f8,s__d__d_1003c7dc,&local_114,piVar2 + 1);
            if (iVar1 != 2) {
              FUN_1001cd40();
              uVar3 = 0x550;
              goto LAB_1001db31;
            }
          }
          if (local_114 != 0) {
            iVar1 = FUN_10025ab0(local_108);
            *piVar2 = iVar1;
            if (*piVar2 == 0) {
              FUN_1001cd40();
              uVar3 = 0x559;
              goto LAB_1001db31;
            }
            iVar1 = FUN_1001db50();
            piVar2[1] = iVar1;
            if (local_108[0] != 0) {
              piVar2[0x10] = piVar2[0x10] | 2;
            }
          }
          iVar1 = FUN_100149e0(0x100);
          if (iVar1 == 0) {
            FUN_1001cd40();
            uVar3 = 0x560;
          }
          else {
            iVar1 = FUN_10033390(local_100,s_Translation_1003c7bc,0xb);
            if (iVar1 == 0) {
              if (local_110 == 0xf1) {
                piVar2[9] = 0;
                iVar1 = FUN_1002836b(local_f5,&DAT_1003a694,&local_114);
                if (iVar1 != 1) {
                  FUN_1001cd40();
                  uVar3 = 0x567;
                  goto LAB_1001db31;
                }
              }
              else {
                if (local_110 != 0xf2) {
                  FUN_1001cd40();
                  uVar3 = 0x571;
                  goto LAB_1001db31;
                }
                iVar1 = FUN_1002836b(local_f5,s__d__d_1003c7dc,&local_114,piVar2 + 9);
                if (iVar1 != 2) {
                  FUN_1001cd40();
                  uVar3 = 0x56e;
                  goto LAB_1001db31;
                }
              }
              if (local_114 != 0) {
                iVar1 = FUN_10026bf0(local_108);
                piVar2[8] = iVar1;
                if (piVar2[8] == 0) {
                  FUN_1001cd40();
                  uVar3 = 0x578;
                  goto LAB_1001db31;
                }
                iVar1 = FUN_1001dd20();
                piVar2[9] = iVar1;
                if (local_108[0] != 0) {
                  piVar2[0x10] = piVar2[0x10] | 2;
                }
              }
              piVar2[0x10] = piVar2[0x10] | 1;
              return piVar2;
            }
            FUN_1001cd40();
            uVar3 = 0x562;
          }
        }
        else {
          FUN_1001cd40();
          uVar3 = 0x544;
        }
      }
    }
  }
LAB_1001db31:
  FUN_10015fb0(0x3d,&DAT_10265ce0,s___Actor_path_c_1003c778,uVar3,&DAT_10265ce0,0);
  return (int *)0x0;
}

