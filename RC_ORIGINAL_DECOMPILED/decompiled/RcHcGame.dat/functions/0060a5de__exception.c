/*
 * exception::~exception at 0060a5de
 * void __thiscall ~exception(exception * this)
 * Address ranges: 0060a5de-0060a5e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to exception::~exception
 */

void __thiscall exception::~exception(exception *this)

{
  *(undefined ***)this = &PTR_FUN_00651bc0;
  if (*(int *)(this + 8) != 0) {
    FUN_005fe5f0(*(undefined4 *)(this + 4));
  }
  return;
}

