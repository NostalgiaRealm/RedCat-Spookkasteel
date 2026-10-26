/*
 * FUN_005c6290 at 005c6290
 * undefined FUN_005c6290(void)
 * Address ranges: 005c6290-005c66fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_005c6290(void)

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
  
  iVar1 = FUN_005cd390(4);
  if (iVar1 == 0) {
    uVar3 = 0x51d;
  }
  else {
    if ((local_10c & 0xffff0000) == 0x10010000) {
      piVar2 = (int *)FUN_005c6740();
      return piVar2;
    }
    if (local_10c != 0x48544150) {
      FUN_005cf220(0x3f,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9878 + 8,0x527,
                   &DAT_006b3f70,0);
      return (int *)0x0;
    }
    iVar1 = FUN_005cd370(0x100);
    if (iVar1 == 0) {
      uVar3 = 0x52e;
    }
    else {
      iVar1 = FUN_0060b449(local_100,s__X__X_006a979c,&local_10c,&local_110);
      if (iVar1 != 2) {
        FUN_005cf220(0x3f,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9878 + 8,0x533,
                     &DAT_006b3f70,0);
        return (int *)0x0;
      }
      local_110 = local_110 | local_10c << 8;
      if (local_110 == 0xf0) {
        piVar2 = (int *)FUN_005c5ef0();
        return piVar2;
      }
      if ((local_110 != 0xf1) && (local_110 != 0xf2)) {
        FUN_005cf220(0x3f,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9878 + 8,0x53b,
                     &DAT_006b3f70,0);
        return (int *)0x0;
      }
      piVar2 = (int *)FUN_005c5420(0);
      if (piVar2 == (int *)0x0) {
        return (int *)0x0;
      }
      iVar1 = FUN_005cd370(0x100);
      if (iVar1 == 0) {
        FUN_005c54f0();
        uVar3 = 0x546;
      }
      else {
        iVar1 = FUN_0060d260(local_100,s_Rotation_006a98ec,8);
        if (iVar1 == 0) {
          if (local_110 == 0xf1) {
            piVar2[1] = 0;
            iVar1 = FUN_0060b449(local_f8,&DAT_00690818,&local_114);
            if (iVar1 != 1) {
              FUN_005c54f0();
              uVar3 = 0x54d;
              goto LAB_005c66e1;
            }
          }
          else {
            if (local_110 != 0xf2) {
              FUN_005c54f0();
              uVar3 = 0x557;
              goto LAB_005c66e1;
            }
            iVar1 = FUN_0060b449(local_f8,s__d__d_006a9900,&local_114,piVar2 + 1);
            if (iVar1 != 2) {
              FUN_005c54f0();
              uVar3 = 0x554;
              goto LAB_005c66e1;
            }
          }
          if (local_114 != 0) {
            iVar1 = FUN_005dcd00(local_108);
            *piVar2 = iVar1;
            if (*piVar2 == 0) {
              FUN_005c54f0();
              uVar3 = 0x55d;
              goto LAB_005c66e1;
            }
            iVar1 = FUN_005c6720();
            piVar2[1] = iVar1;
            if (local_108[0] != 0) {
              piVar2[0x10] = piVar2[0x10] | 2;
            }
          }
          iVar1 = FUN_005cd370(0x100);
          if (iVar1 == 0) {
            FUN_005c54f0();
            uVar3 = 0x564;
          }
          else {
            iVar1 = FUN_0060d260(local_100,s_Translation_006a98e0,0xb);
            if (iVar1 == 0) {
              if (local_110 == 0xf1) {
                piVar2[9] = 0;
                iVar1 = FUN_0060b449(local_f5,&DAT_00690818,&local_114);
                if (iVar1 != 1) {
                  FUN_005c54f0();
                  uVar3 = 0x56b;
                  goto LAB_005c66e1;
                }
              }
              else {
                if (local_110 != 0xf2) {
                  FUN_005c54f0();
                  uVar3 = 0x575;
                  goto LAB_005c66e1;
                }
                iVar1 = FUN_0060b449(local_f5,s__d__d_006a9900,&local_114,piVar2 + 9);
                if (iVar1 != 2) {
                  FUN_005c54f0();
                  uVar3 = 0x572;
                  goto LAB_005c66e1;
                }
              }
              if (local_114 != 0) {
                iVar1 = FUN_005ddc60(local_108);
                piVar2[8] = iVar1;
                if (piVar2[8] == 0) {
                  FUN_005c54f0();
                  uVar3 = 0x57c;
                  goto LAB_005c66e1;
                }
                iVar1 = FUN_005c6700();
                piVar2[9] = iVar1;
                if (local_108[0] != 0) {
                  piVar2[0x10] = piVar2[0x10] | 2;
                }
              }
              piVar2[0x10] = piVar2[0x10] | 1;
              return piVar2;
            }
            FUN_005c54f0();
            uVar3 = 0x566;
          }
        }
        else {
          FUN_005c54f0();
          uVar3 = 0x548;
        }
      }
    }
  }
LAB_005c66e1:
  FUN_005cf220(0x3d,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9878 + 8,uVar3,
               &DAT_006b3f70,0);
  return (int *)0x0;
}

