/*
 * FUN_0049fa64 at 0049fa64
 * undefined __register FUN_0049fa64(int * param_1, int * param_2)
 * Address ranges: 0049fa64-0049fc3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049fa64(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  int local_1c;
  int local_14;
  
  if (param_2 == (int *)0x0) {
    FUN_0049fa18(param_1);
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  else {
    uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0049f730);
    if ((char)uVar1 == '\0') {
      FUN_00412a74(param_1,param_2);
    }
    else if (param_2 != param_1) {
      piVar2 = (int *)FUN_00403224(param_2,(int)&PTR_FUN_0049f730);
      FUN_0049fa18(param_1);
      if (piVar2[9] == 0) {
        iVar4 = FUN_0045ba40(piVar2[0xc]);
        if (0 < iVar4) {
          iVar4 = FUN_0045ba40(piVar2[0xc]);
          uVar5 = iVar4 - 1;
          uVar1 = extraout_ECX_00;
          if (SBORROW4(iVar4,1)) {
            uVar5 = thunk_FUN_00402874(uVar5);
            uVar1 = extraout_ECX_01;
          }
          if (-1 < (int)uVar5) {
            local_1c = uVar5 + 1;
            local_14 = 0;
            do {
              piVar3 = FUN_0049a2d4((int *)&LAB_0049893c,'\x01',uVar1);
              piVar6 = (int *)(*(code *)**(undefined4 **)piVar2[0xc])
                                        ((undefined4 *)piVar2[0xc],local_14);
              uVar1 = FUN_00403224(piVar6,(int)&LAB_0049893c);
              (**(code **)(*piVar3 + 8))(piVar3,uVar1);
              (**(code **)(*(int *)param_1[0xc] + 0xc))((int *)param_1[0xc],piVar3);
              local_14 = local_14 + 1;
              local_1c = local_1c + -1;
              uVar1 = extraout_ECX_02;
            } while (local_1c != 0);
          }
        }
      }
      else {
        piVar3 = FUN_0049f0ec(&LAB_0049eb10,extraout_EDX,extraout_ECX);
        iVar4 = FUN_0049f478(piVar3,*(byte **)(piVar2[9] + 4));
        param_1[9] = iVar4;
      }
      (**(code **)(*param_1 + 0x78))(param_1,piVar2[10]);
      (**(code **)(*param_1 + 0x74))(param_1,(char)piVar2[8]);
      (**(code **)(*param_1 + 0x7c))(param_1,piVar2[0xb]);
      (**(code **)(*param_1 + 0x80))(param_1,*(undefined1 *)((int)piVar2 + 0x3d));
      uVar1 = (**(code **)(*piVar2 + 0x2c))();
      (**(code **)(*param_1 + 0x40))(param_1,uVar1);
      uVar1 = (**(code **)(*piVar2 + 0x20))();
      (**(code **)(*param_1 + 0x34))(param_1,uVar1);
      *(char *)(param_1 + 0xf) = (char)piVar2[0xf];
      param_1[0x10] = piVar2[0x10];
      *(char *)(param_1 + 0x11) = (char)piVar2[0x11];
      (**(code **)(*param_1 + 0x3c))(param_1,(char)piVar2[0x13]);
      (**(code **)(*param_1 + 0x84))(param_1,piVar2[0x14]);
      (**(code **)(*param_1 + 0x88))(param_1,(char)piVar2[0x15]);
      (**(code **)(*param_1 + 0x10))(param_1,param_1);
    }
  }
  return;
}

