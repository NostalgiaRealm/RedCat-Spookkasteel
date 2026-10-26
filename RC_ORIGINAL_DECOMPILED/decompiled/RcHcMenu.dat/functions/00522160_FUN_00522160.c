/*
 * FUN_00522160 at 00522160
 * undefined __register FUN_00522160(int param_1, undefined2 * param_2, uint param_3)
 * Address ranges: 00522160-005221a2;005221c3-0052233e;00522363-0052292c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00522160(int param_1,undefined2 *param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  uint extraout_ECX_06;
  uint extraout_ECX_07;
  uint extraout_ECX_08;
  uint extraout_ECX_09;
  uint extraout_ECX_10;
  uint extraout_ECX_11;
  uint extraout_ECX_12;
  uint extraout_ECX_13;
  uint extraout_ECX_14;
  uint extraout_ECX_15;
  uint extraout_ECX_16;
  uint extraout_ECX_17;
  uint extraout_ECX_18;
  uint extraout_ECX_19;
  uint extraout_ECX_20;
  uint extraout_ECX_21;
  uint extraout_ECX_22;
  uint extraout_ECX_23;
  uint extraout_ECX_24;
  uint extraout_ECX_25;
  uint extraout_ECX_26;
  uint extraout_EDX;
  uint uVar7;
  uint extraout_EDX_00;
  int extraout_EDX_01;
  int iVar8;
  int extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  uint extraout_EDX_06;
  uint extraout_EDX_07;
  uint extraout_EDX_08;
  uint extraout_EDX_09;
  int extraout_EDX_10;
  uint extraout_EDX_11;
  int extraout_EDX_12;
  uint extraout_EDX_13;
  int extraout_EDX_14;
  uint extraout_EDX_15;
  uint extraout_EDX_16;
  uint extraout_EDX_17;
  uint extraout_EDX_18;
  uint extraout_EDX_19;
  uint3 uVar10;
  undefined2 *extraout_EDX_20;
  undefined2 *puVar9;
  uint extraout_EDX_21;
  uint extraout_EDX_22;
  
  uVar7 = param_3;
  if (((param_3 & 4) == 0) || (*(char *)(param_1 + 0x22d) != '\0')) {
    switch(*param_2) {
    case 0x20:
      uVar4 = FUN_00523748(*(int *)(param_1 + 0x274));
      (**(code **)(**(int **)(param_1 + 0x274) + 0xbc))
                (*(int **)(param_1 + 0x274),param_3 & 0xff,uVar4);
      uVar7 = extraout_ECX_26;
      break;
    case 0x21:
      if ((param_3 & 4) == 0) {
        if ((param_3 & 1) == 0) {
          iVar3 = FUN_00523748(*(int *)(param_1 + 0x274));
          uVar2 = FUN_00523e68(*(int **)(param_1 + 0x274));
          uVar7 = extraout_EDX_15;
          if (SBORROW4(iVar3,uVar2)) {
            thunk_FUN_00402874(uVar2);
            uVar7 = extraout_EDX_16;
          }
          (**(code **)(**(int **)(param_1 + 0x274) + 0xbc))
                    (*(int **)(param_1 + 0x274),uVar7 & 0xffffff00);
        }
        else {
          iVar3 = FUN_00523748(*(int *)(param_1 + 0x274));
          uVar7 = FUN_00523e68(*(int **)(param_1 + 0x274));
          if (SBORROW4(iVar3,uVar7)) {
            thunk_FUN_00402874(uVar7);
          }
          (**(code **)(**(int **)(param_1 + 0x274) + 0xbc))(*(int **)(param_1 + 0x274),1);
        }
      }
      iVar3 = FUN_00523748(*(int *)(param_1 + 0x274));
      uVar2 = FUN_00523e68(*(int **)(param_1 + 0x274));
      uVar7 = iVar3 - uVar2;
      if (SBORROW4(iVar3,uVar2)) {
        thunk_FUN_00402874(uVar2);
        uVar7 = extraout_EDX_17;
      }
      FUN_00523d00(*(int **)(param_1 + 0x274),uVar7);
      uVar7 = extraout_ECX_20;
      break;
    case 0x22:
      if ((param_3 & 4) == 0) {
        if ((param_3 & 1) == 0) {
          iVar3 = FUN_00523748(*(int *)(param_1 + 0x274));
          uVar2 = FUN_00523e68(*(int **)(param_1 + 0x274));
          uVar7 = extraout_EDX_18;
          if (SCARRY4(iVar3,uVar2)) {
            thunk_FUN_00402874(uVar2);
            uVar7 = extraout_EDX_19;
          }
          (**(code **)(**(int **)(param_1 + 0x274) + 0xbc))
                    (*(int **)(param_1 + 0x274),uVar7 & 0xffffff00,iVar3 + uVar2);
        }
        else {
          iVar3 = FUN_00523748(*(int *)(param_1 + 0x274));
          uVar7 = FUN_00523e68(*(int **)(param_1 + 0x274));
          if (SCARRY4(iVar3,uVar7)) {
            thunk_FUN_00402874(uVar7);
          }
          (**(code **)(**(int **)(param_1 + 0x274) + 0xbc))
                    (*(int **)(param_1 + 0x274),1,iVar3 + uVar7);
        }
      }
      iVar3 = FUN_00523748(*(int *)(param_1 + 0x274));
      uVar7 = FUN_00523e68(*(int **)(param_1 + 0x274));
      if (SCARRY4(iVar3,uVar7)) {
        thunk_FUN_00402874(uVar7);
      }
      FUN_00523d00(*(int **)(param_1 + 0x274),iVar3 + uVar7);
      uVar7 = extraout_ECX_21;
      break;
    case 0x23:
      if (((param_3 & 4) == 0) && (*(char *)(param_1 + 0x238) == '\0')) {
        uVar2 = FUN_0051e5f0(*(int *)(param_1 + 0x27c));
        uVar7 = uVar2 - 1;
        if (SBORROW4(uVar2,1)) {
          thunk_FUN_00402874(uVar2);
          uVar7 = extraout_EDX_22;
        }
        iVar3 = FUN_0051e404(*(int **)(param_1 + 0x27c),uVar7);
        FUN_0052154c(param_1,iVar3);
        uVar7 = extraout_ECX_25;
      }
      else {
        if ((param_3 & 4) == 0) {
          if ((param_3 & 1) == 0) {
            puVar9 = param_2;
            if (SBORROW4(*(int *)(*(uint *)(param_1 + 0x274) + 0x204),1)) {
              thunk_FUN_00402874(*(uint *)(param_1 + 0x274));
              puVar9 = extraout_EDX_20;
            }
            (**(code **)(**(int **)(param_1 + 0x274) + 0xbc))
                      (*(int **)(param_1 + 0x274),(uint)puVar9 & 0xffffff00);
          }
          else {
            if (SBORROW4(*(int *)(*(uint *)(param_1 + 0x274) + 0x204),1)) {
              thunk_FUN_00402874(*(uint *)(param_1 + 0x274));
            }
            (**(code **)(**(int **)(param_1 + 0x274) + 0xbc))(*(int **)(param_1 + 0x274),1);
          }
        }
        iVar3 = *(int *)(*(uint *)(param_1 + 0x274) + 0x204);
        uVar7 = iVar3 - 1;
        if (SBORROW4(iVar3,1)) {
          thunk_FUN_00402874(*(uint *)(param_1 + 0x274));
          uVar7 = extraout_EDX_21;
        }
        FUN_00523d00(*(int **)(param_1 + 0x274),uVar7);
        uVar7 = extraout_ECX_24;
      }
      break;
    case 0x24:
      if (((param_3 & 4) == 0) && (*(char *)(param_1 + 0x238) == '\0')) {
        FUN_0051e704(*(int **)(param_1 + 0x27c),0);
        iVar3 = FUN_0051e404(*(int **)(param_1 + 0x27c),0);
        FUN_0052154c(param_1,iVar3);
        uVar7 = extraout_ECX_23;
      }
      else {
        if ((param_3 & 4) == 0) {
          uVar10 = (uint3)((uint)param_2 >> 8);
          if ((param_3 & 1) == 0) {
            (**(code **)(**(int **)(param_1 + 0x274) + 0xbc))
                      (*(int **)(param_1 + 0x274),(uint)uVar10 << 8,0);
          }
          else {
            (**(code **)(**(int **)(param_1 + 0x274) + 0xbc))
                      (*(int **)(param_1 + 0x274),CONCAT31(uVar10,1),0);
          }
        }
        FUN_00523d00(*(int **)(param_1 + 0x274),0);
        uVar7 = extraout_ECX_22;
      }
      break;
    case 0x25:
      iVar3 = FUN_00520bf8(param_1);
      uVar7 = FUN_0051c7f0(iVar3);
      uVar2 = FUN_0051e2e4(*(int *)(param_1 + 0x27c));
      if (uVar7 == uVar2) {
        iVar3 = *(int *)(*(uint *)(param_1 + 0x27c) + 0x20c);
        iVar8 = iVar3 + -1;
        if (SBORROW4(iVar3,1)) {
          thunk_FUN_00402874(*(uint *)(param_1 + 0x27c));
          iVar8 = extraout_EDX_10;
        }
        FUN_0051e704(*(int **)(param_1 + 0x27c),iVar8);
      }
      iVar3 = FUN_00520bf8(param_1);
      uVar2 = FUN_0051c7f0(iVar3);
      uVar7 = extraout_ECX_13;
      if (0 < (int)uVar2) {
        iVar3 = FUN_00520bf8(param_1);
        uVar2 = FUN_0051c7f0(iVar3);
        uVar7 = uVar2 - 1;
        if (SBORROW4(uVar2,1)) {
          thunk_FUN_00402874(uVar2);
          uVar7 = extraout_EDX_11;
        }
        iVar3 = FUN_0051e404(*(int **)(param_1 + 0x27c),uVar7);
        FUN_0052154c(param_1,iVar3);
        uVar7 = extraout_ECX_14;
        if (*(char *)(param_1 + 0x238) != '\0') {
          iVar3 = *(int *)(*(uint *)(param_1 + 0x27c) + 0x20c);
          iVar8 = iVar3 + -1;
          if (SBORROW4(iVar3,1)) {
            thunk_FUN_00402874(*(uint *)(param_1 + 0x27c));
            iVar8 = extraout_EDX_12;
          }
          FUN_0051e704(*(int **)(param_1 + 0x27c),iVar8);
          uVar7 = extraout_ECX_15;
        }
      }
      break;
    case 0x26:
      uVar2 = FUN_00523748(*(int *)(param_1 + 0x274));
      uVar7 = uVar2 - 1;
      if (SBORROW4(uVar2,1)) {
        thunk_FUN_00402874(uVar2);
        uVar7 = extraout_EDX_06;
      }
      FUN_00523d00(*(int **)(param_1 + 0x274),uVar7);
      uVar7 = extraout_ECX_07;
      if ((param_3 & 4) == 0) {
        if ((param_3 & 1) == 0) {
          uVar4 = FUN_00523748(*(int *)(param_1 + 0x274));
          (**(code **)(**(int **)(param_1 + 0x274) + 0xbc))
                    (*(int **)(param_1 + 0x274),extraout_EDX_07 & 0xffffff00,uVar4);
          uVar7 = extraout_ECX_09;
        }
        else {
          uVar4 = FUN_00523748(*(int *)(param_1 + 0x274));
          (**(code **)(**(int **)(param_1 + 0x274) + 0xbc))(*(int **)(param_1 + 0x274),1,uVar4);
          uVar7 = extraout_ECX_08;
        }
      }
      break;
    case 0x27:
      iVar3 = FUN_00520bf8(param_1);
      uVar2 = FUN_0051c7f0(iVar3);
      uVar5 = FUN_0051e5f0(*(int *)(param_1 + 0x27c));
      uVar6 = uVar5 - 1;
      uVar7 = extraout_ECX_16;
      if (SBORROW4(uVar5,1)) {
        uVar6 = thunk_FUN_00402874(uVar6);
        uVar7 = extraout_ECX_17;
      }
      if ((int)uVar2 < (int)uVar6) {
        iVar3 = FUN_00520bf8(param_1);
        uVar2 = FUN_0051c7f0(iVar3);
        uVar7 = uVar2 + 1;
        if (SCARRY4(uVar2,1)) {
          thunk_FUN_00402874(uVar2);
          uVar7 = extraout_EDX_13;
        }
        iVar3 = FUN_0051e404(*(int **)(param_1 + 0x27c),uVar7);
        FUN_0052154c(param_1,iVar3);
        uVar7 = extraout_ECX_18;
        if (*(char *)(param_1 + 0x238) != '\0') {
          iVar3 = *(int *)(*(uint *)(param_1 + 0x27c) + 0x20c);
          iVar8 = iVar3 + 1;
          if (SCARRY4(iVar3,1)) {
            thunk_FUN_00402874(*(uint *)(param_1 + 0x27c));
            iVar8 = extraout_EDX_14;
          }
          FUN_0051e704(*(int **)(param_1 + 0x27c),iVar8);
          uVar7 = extraout_ECX_19;
        }
      }
      break;
    case 0x28:
      uVar2 = FUN_00523748(*(int *)(param_1 + 0x274));
      uVar7 = uVar2 + 1;
      if (SCARRY4(uVar2,1)) {
        thunk_FUN_00402874(uVar2);
        uVar7 = extraout_EDX_08;
      }
      FUN_00523d00(*(int **)(param_1 + 0x274),uVar7);
      uVar7 = extraout_ECX_10;
      if ((param_3 & 4) == 0) {
        if ((param_3 & 1) == 0) {
          uVar4 = FUN_00523748(*(int *)(param_1 + 0x274));
          (**(code **)(**(int **)(param_1 + 0x274) + 0xbc))
                    (*(int **)(param_1 + 0x274),extraout_EDX_09 & 0xffffff00,uVar4);
          uVar7 = extraout_ECX_12;
        }
        else {
          uVar4 = FUN_00523748(*(int *)(param_1 + 0x274));
          (**(code **)(**(int **)(param_1 + 0x274) + 0xbc))(*(int **)(param_1 + 0x274),1,uVar4);
          uVar7 = extraout_ECX_11;
        }
      }
    }
  }
  else {
    switch(*param_2) {
    case 0x21:
      uVar2 = FUN_00523e68(*(int **)(param_1 + 0x274));
      iVar3 = *(int *)(*(int *)(param_1 + 0x274) + 0x210);
      uVar7 = iVar3 - uVar2;
      if (SBORROW4(iVar3,uVar2)) {
        thunk_FUN_00402874(uVar2);
        uVar7 = extraout_EDX_03;
      }
      FUN_00523d7c(*(int **)(param_1 + 0x274),uVar7);
      uVar7 = extraout_ECX_03;
      break;
    case 0x22:
      iVar3 = FUN_00523e68(*(int **)(param_1 + 0x274));
      piVar1 = (int *)(*(uint *)(param_1 + 0x274) + 0x210);
      uVar7 = iVar3 + *piVar1;
      if (SCARRY4(iVar3,*piVar1)) {
        thunk_FUN_00402874(*(uint *)(param_1 + 0x274));
        uVar7 = extraout_EDX_04;
      }
      FUN_00523d7c(*(int **)(param_1 + 0x274),uVar7);
      uVar7 = extraout_ECX_04;
      break;
    case 0x23:
      iVar3 = *(int *)(*(uint *)(param_1 + 0x274) + 0x204);
      uVar7 = iVar3 - 1;
      if (SBORROW4(iVar3,1)) {
        thunk_FUN_00402874(*(uint *)(param_1 + 0x274));
        uVar7 = extraout_EDX_05;
      }
      FUN_00523d00(*(int **)(param_1 + 0x274),uVar7);
      uVar7 = extraout_ECX_06;
      break;
    case 0x24:
      FUN_00523d00(*(int **)(param_1 + 0x274),0);
      uVar7 = extraout_ECX_05;
      break;
    case 0x25:
      iVar3 = *(int *)(*(uint *)(param_1 + 0x27c) + 0x20c);
      iVar8 = iVar3 + -1;
      if (SBORROW4(iVar3,1)) {
        thunk_FUN_00402874(*(uint *)(param_1 + 0x27c));
        iVar8 = extraout_EDX_01;
      }
      FUN_0051e704(*(int **)(param_1 + 0x27c),iVar8);
      uVar7 = extraout_ECX_01;
      break;
    case 0x26:
      iVar3 = *(int *)(*(uint *)(param_1 + 0x274) + 0x210);
      uVar7 = iVar3 - 1;
      if (SBORROW4(iVar3,1)) {
        thunk_FUN_00402874(*(uint *)(param_1 + 0x274));
        uVar7 = extraout_EDX;
      }
      FUN_00523d7c(*(int **)(param_1 + 0x274),uVar7);
      uVar7 = extraout_ECX;
      break;
    case 0x27:
      iVar3 = *(int *)(*(uint *)(param_1 + 0x27c) + 0x20c);
      iVar8 = iVar3 + 1;
      if (SCARRY4(iVar3,1)) {
        thunk_FUN_00402874(*(uint *)(param_1 + 0x27c));
        iVar8 = extraout_EDX_02;
      }
      FUN_0051e704(*(int **)(param_1 + 0x27c),iVar8);
      uVar7 = extraout_ECX_02;
      break;
    case 0x28:
      iVar3 = *(int *)(*(uint *)(param_1 + 0x274) + 0x210);
      uVar7 = iVar3 + 1;
      if (SCARRY4(iVar3,1)) {
        thunk_FUN_00402874(*(uint *)(param_1 + 0x274));
        uVar7 = extraout_EDX_00;
      }
      FUN_00523d7c(*(int **)(param_1 + 0x274),uVar7);
      uVar7 = extraout_ECX_00;
    }
  }
  FUN_0043760c(param_1,param_2,CONCAT31((int3)(uVar7 >> 8),(char)param_3));
  return;
}

