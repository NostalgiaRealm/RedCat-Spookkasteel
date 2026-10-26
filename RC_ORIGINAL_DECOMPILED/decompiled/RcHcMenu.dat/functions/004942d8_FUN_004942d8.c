/*
 * FUN_004942d8 at 004942d8
 * undefined __register FUN_004942d8(int * param_1)
 * Address ranges: 004942d8-0049433d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48e834 slot 8 for TAppObj. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48e834 slot 8 for TAppObj.
   Original bytes unchanged; names and types still inferred. */

void FUN_004942d8(int *param_1)

{
  bool bVar1;
  char cVar2;
  byte local_2c [28];
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_8 = param_1;
  bVar1 = FUN_00493e54(param_1,local_2c);
  if (bVar1) {
    do {
      FUN_00494e38(local_8,local_2c,'\x01',&local_c,&local_10);
      cVar2 = (**(code **)(*local_10 + 0x18))();
      if (cVar2 == '\0') {
        (**(code **)(*local_c + 0x68))();
      }
      else {
        (**(code **)(*local_c + 100))();
      }
      cVar2 = FUN_00493e78(local_8,local_2c);
    } while (cVar2 != '\0');
  }
  (**(code **)(*local_8 + 0x1c))();
  return;
}

