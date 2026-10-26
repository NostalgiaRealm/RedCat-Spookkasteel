/*
 * FUN_005587dc at 005587dc
 * undefined __register FUN_005587dc(int * param_1)
 * Address ranges: 005587dc-0055893a;00558942-00558945
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 33 for TCustomGDISlider. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5574b0 slot 33 for
   TCustomGDISlider. Original bytes unchanged; names and types still inferred. */

void FUN_005587dc(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  RECT *pRVar4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  RECT local_1c;
  int *local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  if ((char)param_1[0x6a] == '\0') {
    *(undefined1 *)(param_1 + 0x6a) = 1;
    puStack_24 = &LAB_0055893b;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    local_8 = param_1;
    (**(code **)(*param_1 + 0x40))(param_1,&local_1c);
    local_c = (int *)(**(code **)(*local_8 + 0xec))();
    if (local_c != (int *)0x0) {
      cVar1 = (**(code **)(*local_c + 0x1c))();
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(*local_c + 0x28))();
        if ((cVar1 == '\0') && ((char)local_8[0x6f] == '\0')) {
          FUN_0041c8d0((int *)local_8[0x48],0,0,local_c);
        }
        else {
          pRVar4 = &local_1c;
          piVar2 = (int *)FUN_0049ac74(local_8[0x6c],extraout_EDX,extraout_ECX);
          FUN_0041c848(piVar2,&local_1c.left,(int *)local_8[0x48],&pRVar4->left);
          cVar1 = FUN_00498668(local_8[0x6c],local_c,(char)local_8[0x6f],
                               *(char *)((int)local_8 + 0x1bd));
          if (cVar1 == '\0') {
            piVar2 = local_c;
            piVar3 = (int *)FUN_0049ac74(local_8[0x6c],extraout_EDX_00,extraout_ECX_00);
            FUN_0041c8d0(piVar3,0,0,piVar2);
          }
          FUN_0041c8d0((int *)local_8[0x48],0,0,(int *)local_8[0x6c]);
        }
      }
    }
    if ((*(byte *)(local_8 + 8) & 0x10) != 0) {
      FUN_0041c434(*(int **)(local_8[0x48] + 0x14),'\0');
      FUN_0041c97c((int *)local_8[0x48],&local_1c);
    }
    *in_FS_OFFSET = uStack_28;
    *(undefined1 *)(local_8 + 0x6a) = 0;
    return;
  }
  return;
}

