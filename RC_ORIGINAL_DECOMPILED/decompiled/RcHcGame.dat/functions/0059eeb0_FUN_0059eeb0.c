/*
 * FUN_0059eeb0 at 0059eeb0
 * undefined FUN_0059eeb0(void)
 * Address ranges: 0059eeb0-0059efb2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_0059eeb0(int param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined4 *puVar4;
  uint uVar5;
  float *pfVar6;
  undefined4 uVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 extraout_var;
  float10 fVar10;
  float10 fVar11;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  fVar1 = param_2;
  puVar4 = (undefined4 *)FUN_00597fb0();
  fVar2 = param_3;
  local_c = *puVar4;
  local_8 = puVar4[1];
  local_4 = puVar4[2];
  puVar4 = (undefined4 *)FUN_00597fb0();
  local_18 = *puVar4;
  local_14 = puVar4[1];
  local_10 = puVar4[2];
  (**(code **)**(undefined4 **)(param_1 + 0x1c))();
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))();
  cVar3 = (char)uVar5;
  do {
    if (cVar3 == '\0') {
      return uVar5 & 0xffffff00;
    }
    pfVar6 = (float *)(**(code **)(**(int **)(param_1 + 0x1c) + 0x20))();
    if ((*pfVar6 != fVar1) && (*pfVar6 != fVar2)) {
      uVar7 = FUN_00597fb0(&local_c,&local_18);
      fVar10 = (float10)FUN_0059edc0(uVar7);
      param_3 = (float)fVar10;
      iVar8 = FUN_0059aed0();
      uVar9 = (undefined2)((uint)iVar8 >> 0x10);
      if (*(float *)(iVar8 + 0x2e8) == 0.0) {
        fVar10 = (float10)FUN_005ad390(iVar8 + 0x29c,&param_2);
        *(float *)(iVar8 + 0x2e8) = (float)fVar10;
        uVar9 = extraout_var;
      }
      else {
        fVar10 = (float10)*(float *)(iVar8 + 0x2e8);
      }
      fVar11 = (float10)param_3;
      if (fVar11 < fVar10 != 0) {
        return CONCAT31((int3)(CONCAT22(uVar9,(ushort)(fVar11 < fVar10) << 8 |
                                              (ushort)(NAN(fVar11) || NAN(fVar10)) << 10 |
                                              (ushort)(fVar11 == fVar10) << 0xe) >> 8),1);
      }
    }
    (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
    uVar5 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))();
    cVar3 = (char)uVar5;
  } while( true );
}

