/*
 * FUN_004a9178 at 004a9178
 * undefined __register FUN_004a9178(int param_1, int * param_2)
 * Address ranges: 004a9178-004a939a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a8798 slot 34 for TWinControlWrapper. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a8798 slot 34 for
   TWinControlWrapper. Original bytes unchanged; names and types still inferred. */

void FUN_004a9178(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(short *)(param_1 + 0x132) != 0) {
    (**(code **)(param_1 + 0x130))(*(undefined4 *)(param_1 + 0x134),param_2);
  }
  iVar1 = FUN_004a8f84(param_1);
  if (iVar1 != 0) {
    iVar1 = *param_2;
    if (iVar1 < 0x101) {
      if (iVar1 == 0x100) {
        iVar1 = FUN_00433700(param_1,*param_2,param_2[1],param_2[2]);
        param_2[3] = iVar1;
      }
      else if (iVar1 < 8) {
        if (iVar1 == 7) {
          iVar1 = FUN_00433700(param_1,*param_2,param_2[1],param_2[2]);
          param_2[3] = iVar1;
        }
        else if (iVar1 == 2) {
          iVar1 = FUN_004a8f84(param_1);
          *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x130);
          *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x134);
          *(undefined4 *)(param_1 + 0x128) = 0;
          *(undefined4 *)(param_1 + 0x130) = 0;
          *(undefined4 *)(param_1 + 0x134) = 0;
        }
        else if (iVar1 == 5) {
          uVar4 = 0;
          uVar3 = 0;
          piVar2 = (int *)FUN_004a8f84(param_1);
          (**(code **)(*piVar2 + 0x7c))(piVar2,0,0,uVar3,uVar4);
        }
      }
      else if (iVar1 == 8) {
        iVar1 = FUN_00433700(param_1,*param_2,param_2[1],param_2[2]);
        param_2[3] = iVar1;
      }
      else if (iVar1 == 0x87) {
        iVar1 = FUN_00433700(param_1,*param_2,param_2[1],param_2[2]);
        param_2[3] = iVar1;
      }
    }
    else if (iVar1 == 0x101) {
      iVar1 = FUN_00433700(param_1,*param_2,param_2[1],param_2[2]);
      param_2[3] = iVar1;
    }
    else if (iVar1 == 0x102) {
      iVar1 = FUN_00433700(param_1,*param_2,param_2[1],param_2[2]);
      param_2[3] = iVar1;
    }
    else if (iVar1 == 0xb01a) {
      iVar1 = FUN_00433700(param_1,*param_2,param_2[1],param_2[2]);
      param_2[3] = iVar1;
    }
    else if (iVar1 == 0xb01b) {
      iVar1 = FUN_00433700(param_1,*param_2,param_2[1],param_2[2]);
      param_2[3] = iVar1;
    }
  }
  return;
}

