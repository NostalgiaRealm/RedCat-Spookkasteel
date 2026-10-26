/*
 * FUN_0059ebb0 at 0059ebb0
 * undefined FUN_0059ebb0(void)
 * Address ranges: 0059ebb0-0059edb5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_0059ebb0(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00644b38;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)**(undefined4 **)(param_1 + 0x1c))();
  cVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))();
  do {
    if (cVar1 == '\0') {
      ExceptionList = pvStack_c;
      return 0;
    }
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))();
    iVar2 = FUN_0059aed0();
    if (*(float *)(iVar2 + 0x354) == 0.0) {
      fVar4 = (float10)FUN_005ad390(iVar2 + 0x308,&uStack_32);
      *(float *)(iVar2 + 0x354) = (float)fVar4;
      fStack_2c = (float)fVar4;
    }
    else {
      fStack_2c = *(float *)(iVar2 + 0x354);
    }
    iVar2 = FUN_00597fb0();
    if (ABS(*(float *)(iVar2 + 4) - *(float *)(param_2 + 4)) <= fStack_2c) {
LAB_0059ecaf:
      iVar2 = 0;
      do {
        FUN_00598310(&uStack_30,iVar2);
        uStack_4 = 0;
        cVar1 = FUN_0059b1f0();
        if (cVar1 != '\0') {
          FUN_0059df90(uStack_30);
          puVar3 = (undefined4 *)FUN_00597fb0();
          uStack_18 = *puVar3;
          uStack_14 = puVar3[1];
          uStack_10 = puVar3[2];
          puVar3 = (undefined4 *)FUN_00597fb0();
          uStack_24 = *puVar3;
          uStack_20 = puVar3[1];
          uStack_1c = puVar3[2];
          cVar1 = FUN_0059eb10(param_2,param_3,&uStack_18,&uStack_24);
          if ((cVar1 == '\0') &&
             (cVar1 = FUN_0059eb10(&uStack_18,&uStack_24,param_2,param_3), cVar1 == '\0')) {
            uStack_4 = 0xffffffff;
            FUN_005630e0();
            ExceptionList = pvStack_c;
            return 1;
          }
        }
        uStack_4 = 0xffffffff;
        FUN_005630e0();
        iVar2 = iVar2 + 1;
      } while (iVar2 < 8);
    }
    else {
      iVar2 = FUN_0059aed0();
      if (*(float *)(iVar2 + 0x354) == 0.0) {
        fVar4 = (float10)FUN_005ad390(iVar2 + 0x308,&uStack_31);
        *(float *)(iVar2 + 0x354) = (float)fVar4;
        fStack_28 = (float)fVar4;
      }
      else {
        fStack_28 = *(float *)(iVar2 + 0x354);
      }
      iVar2 = FUN_00597fb0();
      if (ABS(*(float *)(iVar2 + 4) - *(float *)(param_3 + 4)) <= fStack_28) goto LAB_0059ecaf;
    }
    (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
    cVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))();
  } while( true );
}

