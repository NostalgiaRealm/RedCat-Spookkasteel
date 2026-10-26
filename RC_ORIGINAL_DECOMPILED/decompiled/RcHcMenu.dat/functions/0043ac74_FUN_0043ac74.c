/*
 * FUN_0043ac74 at 0043ac74
 * undefined __register FUN_0043ac74(undefined4 * param_1, int * param_2, int param_3, int param_4)
 * Address ranges: 0043ac74-0043ae80
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42f7d4 slot 2 for TDockTree. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42f7d4 slot 2 for
   TDockTree. Original bytes unchanged; names and types still inferred. */

void FUN_0043ac74(undefined4 *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  char cVar3;
  int iVar4;
  int *piVar5;
  byte bVar6;
  int local_34 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  char local_d;
  int local_c;
  byte local_5;
  
  bVar6 = 0;
  local_5 = (byte)param_3;
  if (*(char *)((int)param_2 + 0x47) != '\0') {
    iVar4 = param_1[0xe];
    if (iVar4 == 0) {
      if (*(int *)(param_1[0x19] + 8) == 0) {
        (**(code **)(*(int *)param_1[5] + 0x40))((int *)param_1[5],&local_24);
        (**(code **)(*(int *)param_1[5] + 0x84))((int *)param_1[5],&local_24);
        iVar4 = local_1c - local_24;
        local_14 = local_18 - local_20;
        if (*(char *)(param_1[5] + 0x4c) != '\0') {
          if (iVar4 == 0) {
            iVar4 = FUN_004326b8((int)param_2);
          }
          if (local_14 == 0) {
            local_14 = FUN_004326a4((int)param_2);
          }
        }
        FUN_00411640(local_24,local_20,iVar4,local_34,local_14);
        piVar2 = local_34;
        piVar5 = &local_24;
        for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar5 = *piVar2;
          piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
          piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
        }
        (**(code **)*param_1)(param_1,param_2,&local_24);
        FUN_0043213c(param_2,&local_24);
        iVar1 = FUN_0043a48c((int *)&LAB_0042f688,'\x01',(int)param_1);
        iVar4 = param_1[0x19];
        *(int *)(iVar4 + 8) = iVar1;
        *(int *)(iVar1 + 0x14) = iVar4;
        *(int **)(iVar1 + 4) = param_2;
      }
      else {
        if ((local_5 == 0) || (local_5 == 5)) {
          local_5 = 4;
        }
        piVar2 = (int *)FUN_0043ab70((int)param_1,(int)param_2,param_3);
        iVar4 = extraout_ECX;
        if (piVar2 != (int *)0x0) {
          FUN_0043bb5c((int)param_1,piVar2);
          iVar4 = extraout_ECX_00;
        }
        local_c = FUN_0043ab70((int)param_1,param_4,iVar4);
        local_d = *(char *)(local_5 + 0x56f89c);
        iVar4 = FUN_0043a4b0(param_1[0x19]);
        if (iVar4 == 1) {
          iVar4 = param_1[0x19];
          *(char *)(iVar4 + 0x10) = local_d;
          if (local_d == '\x01') {
            iVar4 = FUN_0043a5c0(*(int *)(iVar4 + 8),'\x02');
            *(int *)(param_1[0x19] + 0x20) = iVar4;
            iVar4 = FUN_0043a5c0(*(int *)(param_1[0x19] + 8),'\x01');
            param_1[0x1a] = iVar4;
          }
          else if (local_d == '\x02') {
            iVar4 = FUN_0043a5c0(*(int *)(iVar4 + 8),'\x01');
            *(int *)(param_1[0x19] + 0x20) = iVar4;
            iVar4 = FUN_0043a5c0(*(int *)(param_1[0x19] + 8),'\x02');
            param_1[0x1a] = iVar4;
          }
        }
        iVar4 = FUN_0043a48c((int *)&LAB_0042f688,'\x01',(int)param_1);
        *(int **)(iVar4 + 4) = param_2;
        if (local_c == 0) {
          cVar3 = *(char *)(param_1[0x19] + 0x10);
        }
        else {
          cVar3 = *(char *)(*(int *)(local_c + 0x14) + 0x10);
        }
        if (local_d == '\0') {
          local_d = cVar3;
        }
        if (cVar3 == local_d) {
          FUN_0043b00c((int)param_1,iVar4,local_c,*(char *)(local_5 + 0x56f8a4));
        }
        else {
          FUN_0043ae84((int)param_1,iVar4,local_c,*(char *)(local_5 + 0x56f8a4),local_d);
        }
      }
    }
    else {
      *(int **)(iVar4 + 4) = param_2;
      FUN_0043a7e8(iVar4);
    }
    (**(code **)(*(int *)param_1[5] + 0x74))();
  }
  return;
}

