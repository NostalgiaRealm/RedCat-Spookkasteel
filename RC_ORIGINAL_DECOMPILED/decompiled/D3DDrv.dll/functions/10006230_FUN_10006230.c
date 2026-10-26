/*
 * FUN_10006230 at 10006230
 * undefined4 __cdecl FUN_10006230(int param_1)
 * Address ranges: 10006230-100067b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10006230(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int aiStack_dc [3];
  int *piStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int *piStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int *piStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int *piStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int *piStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int *piStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int *piStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int *piStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int *piStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int *piStack_40;
  undefined4 uStack_3c;
  
  if (DAT_10038e64 != 0) {
    if (param_1 == 1) {
      (**(code **)(*DAT_100274c8 + 0xa0))();
      FUN_10001a10(1);
      FUN_100019c0(5,6);
      FUN_100067c0();
      iVar4 = 0;
      if (0 < DAT_101271c0) {
        puVar2 = &DAT_101199c0;
        do {
          piVar3 = (int *)*puVar2;
          FUN_10001a40(0,(uint)((*(byte *)(piVar3 + 2) & 0x10) == 0));
          iVar1 = FUN_10005a80(0,*piVar3,piVar3[7]);
          if (iVar1 == 0) {
            return 0;
          }
          FUN_10005f80(piVar3,1,0,0);
          uStack_3c = 0x1000679e;
          FUN_10001920(&DAT_1011a1c0 + piVar3[9] * 0x28,piVar3[10]);
          iVar4 = iVar4 + 1;
          puVar2 = puVar2 + 1;
        } while (iVar4 < DAT_101271c0);
      }
    }
    else {
      if (param_1 != 2) {
        if (param_1 == 3) {
          (**(code **)(*DAT_100274c8 + 0xa0))();
          (**(code **)(*DAT_100274c8 + 0xa0))();
          uStack_3c = 0;
          piStack_40 = DAT_100274c8;
          uStack_44 = 0x10006296;
          (**(code **)(*DAT_100274c8 + 0xa0))();
          uStack_44 = 4;
          uStack_48 = 1;
          uStack_4c = 0;
          piStack_50 = DAT_100274c8;
          uStack_54 = 0x100062a9;
          (**(code **)(*DAT_100274c8 + 0xa0))();
          uStack_54 = 2;
          uStack_58 = 5;
          uStack_5c = 0;
          piStack_60 = DAT_100274c8;
          uStack_64 = 0x100062bc;
          (**(code **)(*DAT_100274c8 + 0xa0))();
          uStack_64 = 0;
          uStack_68 = 6;
          uStack_6c = 0;
          piStack_70 = DAT_100274c8;
          uStack_74 = 0x100062ce;
          (**(code **)(*DAT_100274c8 + 0xa0))();
          uStack_74 = 4;
          uStack_78 = 4;
          uStack_7c = 0;
          piStack_80 = DAT_100274c8;
          uStack_84 = 0x100062e1;
          (**(code **)(*DAT_100274c8 + 0xa0))();
          uStack_84 = 1;
          uStack_88 = 0xb;
          uStack_8c = 1;
          piStack_90 = DAT_100274c8;
          uStack_94 = 0x100062f5;
          (**(code **)(*DAT_100274c8 + 0xa0))();
          uStack_94 = 2;
          uStack_98 = 2;
          uStack_9c = 1;
          piStack_a0 = DAT_100274c8;
          uStack_a4 = 0x10006309;
          (**(code **)(*DAT_100274c8 + 0xa0))();
          uStack_a4 = 1;
          uStack_a8 = 3;
          uStack_ac = 1;
          piStack_b0 = DAT_100274c8;
          uStack_b4 = 0x1000631d;
          (**(code **)(*DAT_100274c8 + 0xa0))();
          uStack_b4 = 4;
          uStack_b8 = 1;
          uStack_bc = 1;
          piStack_c0 = DAT_100274c8;
          uStack_c4 = 0x10006331;
          (**(code **)(*DAT_100274c8 + 0xa0))();
          uStack_c4 = 0;
          uStack_c8 = 5;
          uStack_cc = 1;
          piStack_d0 = DAT_100274c8;
          aiStack_dc[2] = 0x10006344;
          (**(code **)(*DAT_100274c8 + 0xa0))();
          aiStack_dc[2] = 1;
          aiStack_dc[1] = 6;
          aiStack_dc[0] = 1;
          (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8);
          (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,1,4,4);
          FUN_10001a10(1);
          FUN_100019c0(5,6);
          FUN_10001a40(0,1);
          FUN_10001a40(1,0);
          FUN_100067c0();
          iVar4 = 0;
          DAT_101271c4 = 0;
          if (0 < DAT_101271c0) {
            puVar2 = &DAT_101199c0;
            do {
              piVar3 = (int *)*puVar2;
              aiStack_dc[0] = 0;
              if (piVar3[1] == 0) {
                (&DAT_10119dc0)[DAT_101271c4] = piVar3;
                DAT_101271c4 = DAT_101271c4 + 1;
              }
              else {
                FUN_10001a40(0,(uint)((*(byte *)(piVar3 + 2) & 0x10) == 0));
                iVar1 = FUN_10005a80(0,*piVar3,piVar3[7]);
                if (iVar1 == 0) {
                  return 0;
                }
                (*DAT_10015444)(piVar3[1],aiStack_dc);
                iVar1 = FUN_10005880(1,(short *)piVar3[1],0,aiStack_dc[0]);
                if (iVar1 == 0) {
                  return 0;
                }
                FUN_10005f80(piVar3,3,0,1);
                FUN_10001920(&DAT_1011a1c0 + piVar3[9] * 0x28,piVar3[10]);
                if (*(int *)(piVar3[1] + 0x10) != 0) {
                  FUN_100019c0(2,2);
                  (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,0,1,3);
                  (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,0,4,1);
                  (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,1,1,2);
                  *(undefined4 *)(*(int *)(*(int *)(piVar3[1] + 0x18) + 0x14) + 8) = 0;
                  iVar1 = FUN_10005880(1,(short *)piVar3[1],1,1);
                  if (iVar1 == 0) {
                    return 0;
                  }
                  FUN_10001920(&DAT_1011a1c0 + piVar3[9] * 0x28,piVar3[10]);
                  (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,0,1,4);
                  (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,0,4,4);
                  (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,1,1,4);
                  FUN_100019c0(5,6);
                }
              }
              iVar4 = iVar4 + 1;
              puVar2 = puVar2 + 1;
            } while (iVar4 < DAT_101271c0);
          }
          (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,1,1,1);
          (**(code **)(*DAT_100274c8 + 0xa0))(DAT_100274c8,1,4,1);
          iVar4 = 0;
          if (DAT_101271c4 < 1) {
            return 1;
          }
          puVar2 = &DAT_10119dc0;
          while( true ) {
            piVar3 = (int *)*puVar2;
            FUN_10001a40(0,(uint)((*(byte *)(piVar3 + 2) & 0x10) == 0));
            iVar1 = FUN_10005a80(0,*piVar3,piVar3[7]);
            if (iVar1 == 0) break;
            FUN_10005f80(piVar3,1,0,1);
            FUN_10001920(&DAT_1011a1c0 + piVar3[9] * 0x28,piVar3[10]);
            iVar4 = iVar4 + 1;
            puVar2 = puVar2 + 1;
            if (DAT_101271c4 <= iVar4) {
              return 1;
            }
          }
        }
        return 0;
      }
      (**(code **)(*DAT_100274c8 + 0xa0))();
      FUN_10001a40(0,0);
      FUN_10001a10(1);
      FUN_100019c0(9,1);
      iVar4 = 0;
      if (0 < DAT_101271c0) {
        piVar3 = &DAT_10116dc4;
        do {
          if (*piVar3 != 0) {
            (*DAT_10015444)();
            uStack_3c = 0x1000664b;
            iVar1 = FUN_10005880(0,(short *)*piVar3,0,0);
            if (iVar1 == 0) {
              return 0;
            }
            FUN_10005f80(piVar3 + -1,2,0,0);
            uStack_3c = 0x1000667a;
            FUN_10001920(&DAT_1011a1c0 + piVar3[8] * 0x28,piVar3[9]);
            if (*(int *)(*piVar3 + 0x10) != 0) {
              (**(code **)(*DAT_100274c8 + 0x58))();
              FUN_100019c0(2,2);
              *(undefined4 *)(*(int *)(*(int *)(*piVar3 + 0x18) + 0x14) + 8) = 0;
              uStack_3c = 0x100066b3;
              iVar1 = FUN_10005880(0,(short *)*piVar3,1,1);
              if (iVar1 == 0) {
                return 0;
              }
              FUN_10001920(&DAT_1011a1c0 + piVar3[8] * 0x28,piVar3[9]);
              FUN_100019c0(9,1);
              if (DAT_10038e78 != 0) {
                (**(code **)(*DAT_100274c8 + 0x58))();
              }
            }
          }
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 0xb;
        } while (iVar4 < DAT_101271c0);
        return 1;
      }
    }
  }
  return 1;
}

